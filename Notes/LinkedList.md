# Linked List


#include <iostream>
#include <vector>
using namespace std;

// defining your own data type -- custom data type
// Node : data, address/reference
// we can call it as object
// constructors are used to intialize the objects
// self define objects
class Node
{
public:
    int data;
    Node *next; // node* -- pointer

public: // constructor
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

// (2) -> (4) -> (6)
class LinkedList
{
private:
    Node *head;

public:
    LinkedList() // constructor the head to be null value
    {
        head = nullptr;
    }

    // methods to add a node at the beginning of the list
    void insertFront(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // traversing the linked List
    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

int main()
{
    vector<int> v1 = {1, 2, 4, 5};
    LinkedList myList;
    for (int i = 0; i < v1.size(); ++i)
    {
        myList.insertFront(v1[i]);
    }
    myList.printList();
    return 0;
}