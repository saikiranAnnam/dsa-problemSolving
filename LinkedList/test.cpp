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

int lengthOfLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

// (head)node1 -> null
// tempNode-> null
//
Node *convertArrtoLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *move = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        move->next = temp;
        move = temp;
    }
    return head;
}

int checkIfEleExist(Node *head, int val)
{
    Node *temp = head;
    while (temp->next != nullptr)
    {
        if (temp->data == val)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main()
{
    vector<int> v1 = {9, 2, 4, 5, 12};
    // LinkedList myList;
    // for (int i = 0; i < v1.size(); ++i)
    // {
    //     myList.insertFront(v1[i]);
    // }
    // myList.printList();
    Node *head = convertArrtoLL(v1);
    // cout << head->data;
    cout<<checkIfEleExist(head, 13);
    // cout << lengthOfLL(head);
    return 0;
}