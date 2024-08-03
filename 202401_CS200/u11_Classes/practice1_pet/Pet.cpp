#include "Pet.h"

#include <string>
#include <iostream>
using namespace std;

void Pet::SetName(string new_name)
{
    name = new_name;
}

void Pet::SetAge(int new_age)
{
    age = new_age;
}

void Pet::SetAnimal(string new_animal)
{
    animal = new_animal;
}

void Pet::SetBreed(string new_breed)
{
    breed = new_breed;
}

void Pet::Display()
{
    cout << name << " (Age: " << age << "), " << animal << "/" << breed << endl;
}