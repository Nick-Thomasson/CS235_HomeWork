# Polymorphism graded lab

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
--------------------------------------------------------------------------------
True or false     - Pineapple belongs on pizza.
1. TRUE 	 2. FALSE
Your answer: 1
Correct!

--------------------------------------------------------------------------------
True or false     - Salmon is a mammal.
1. TRUE 	 2. FALSE
Your answer: 1
Wrong!

--------------------------------------------------------------------------------
Fill in the blank - Olathe is in which state?
Your answer: Missouri
Wrong!

--------------------------------------------------------------------------------
Fill in the blank - 2+2 = ?
Your answer: 4
Wrong!

--------------------------------------------------------------------------------
Multiple choice   - What is the Hindi word for cat?
1. aap
2. billee
3. kutta
4. kela
Your answer: 2
Correct!

RESULTS:
2 out of 5 correct
```

## Instructions
Within QuestionFamily.h I've already implemented `IQuestion`. Every type of quiz question has question text (`string question`), but different types of questions store their answers differently. I've already implemented `TrueFalseQuestion` - it stores `bool answer` to store the correct answer here.

In the same file, create two more classes that inherit from `IQuestion`:

- `FillInQuestion`
  - Protected member variable `answer` is a string.
  - Your `IsCorrect` function should take in a `string guess` parameter.
  - Also implement a parameterized constructor (takes in a string for the question and a string for the answer).
  - The default constructor and destructors' function bodies can be left empty.

- `MultipleChoiceQuestion`
  - Protected member variable `vector<string> options` for the multiple choices
  - Protected member variable `int correct` to store the index of the correct answer.
  - Your `IsCorrect` function should take in a `int guess` parameter.
  - Also implement a parameterized constructor (takes in a string for the question, vector of strings for the options, and an integer for the correct answer).
  - The default constructor and destructors' function bodies can be left empty.


Within QuestionFamily.cpp implement the function definitions. You can use the `TrueFalseQuestion` for reference.

Afterwards within Program.cpp I've already created a couple of TrueFalseQuestion objects and pushed them into the `questions` vector. Create at least one FillInQuestion and at least one MultipleChoiceQuestion and push them into the vector too.


