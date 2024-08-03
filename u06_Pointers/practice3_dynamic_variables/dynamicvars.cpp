#include <iostream>
#include <string>
using namespace std;

struct Node
{
  Node( string value )
  {
    data = value;
    ptrNext = nullptr;
    cout << "- constructor (" << data << ")" << endl;
  }

  ~Node()
  {
    cout << "- destructor (" << data << ")" << endl;
  }

  Node* ptrNext{nullptr};
  string data;
};

int main()
{
  cout << endl << "LAB: LINKED NODES" << endl;

  Node* firstNode{nullptr};
  Node* secondNode{nullptr};
  Node* thirdNode{nullptr};
  Node* ptrCurrent{nullptr};

  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "1. Allocating memory for the nodes..." << endl;


  cout << endl << "2. data values:" << endl;
  

  cout << endl << "3. Link nodes: firstNode -> secondNode -> thirdNode..." << endl;
  

  cout << endl << "4. Nodes, in order: ";
  

  cout << endl << "5. Iterating through nodes..." << endl;
  

  cout << endl << "6. Free the memory..." << endl;
  
  
  // -------------------------------------------------------------------------



  cout << endl << "THE END" << endl;
  return 0;
}
