#include <iostream>
#include <string>
using namespace std;

struct Node
{
    Node(string value)
    {
        data = value;
        ptrNext = nullptr;
        cout << "- constructor (" << data << ")" << endl;
    }

    ~Node()
    {
        cout << "- destructor (" << data << ")" << endl;
    }

    Node* ptrNext{ nullptr };
    string data;
};

int main()
{
    cout << endl << "LAB: LINKED NODES" << endl;

    Node* firstNode{ nullptr };
    Node* secondNode{ nullptr };
    Node* thirdNode{ nullptr };
    Node* ptrCurrent{ nullptr };

    // - STUDENT CODE ----------------------------------------------------------
    cout << endl << "1. Allocating memory for the nodes..." << endl;
    firstNode = new Node("firstNode");
    secondNode = new Node("secondNode");
    thirdNode = new Node("thirdNode");
    

    cout << endl << "2. data values:" << endl;
    cout << firstNode->data << endl;
    cout << firstNode->ptrNext << endl;
    cout << secondNode->data << endl;
    cout << secondNode->ptrNext << endl;
    cout << thirdNode->data << endl;
    cout << thirdNode->ptrNext << endl;
   

    cout << endl << "3. Link nodes: firstNode -> secondNode -> thirdNode..." << endl;
    firstNode->ptrNext = secondNode;
    secondNode->ptrNext = thirdNode;
    cout << "All Nodes are linked!! " << endl;
    cout << "-----------------------" << endl;

    cout << endl << "4. Nodes, in order: " << endl;
 
    cout << firstNode->data << endl;
    cout << secondNode->data << endl;
    cout << thirdNode->data << endl;
  

    cout << endl << "5. Iterating through nodes..." << endl;
    ptrCurrent = firstNode;
    while (ptrCurrent != nullptr) {
        cout << ptrCurrent->data << " ";
        ptrCurrent = ptrCurrent->ptrNext;
    }

    cout << endl << "6. Free the memory..." << endl;
    delete firstNode;
    delete secondNode;
    delete thirdNode;

    // -------------------------------------------------------------------------



    cout << endl << "THE END" << endl;
    return 0;
}