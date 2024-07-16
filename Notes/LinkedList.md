# Linked List

A linked List a linear data structure, it has nodes and pointer which address/reference to the next node
In LL data items are stored in a contigous form in the heap memory. 
memory allocation is dynamic in nature.

### LL vs AR

Linked List:
Data Structure: Non-contiguous
Memory Allocation: Dynamic
Insertion/Deletion: Efficient
Access: Sequential

Array:
Data Structure: Contiguous
Memory Allocation: Static
Insertion/Deletion: Inefficient
Access: Random

NOTE: 
1. The LinkedList is a custom data structure
and it need to be created with custom data type. 

LL - custom data structure
Node - custom data type

To create a custom data type(NODE) using classes
code:  
```cpp
class Node{
    public:
    int data;
    Node *next;

    public:
    Node(int data, Node* next){
        data = data;
        next = nullptr;
    }

    Node(int data){
        data = data;
        next = nullptr;
    }
}
```

Python code:
```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
```


### Convert a vector/array into LL:
- Converting an arr to ll, so traversing the elements in the vector 
and allocating there value to dynamically created node. 

CPP code:
```cpp
Node* convertArr2LL(vector<int> &v){
    Node *head = new Node(v[0]);
    Node *move = head;
    for(auto it = 1, i < v.size(); i++){
        Node *temp = new Node(v[i]);
        move -> next = temp;
        move = temp;
    }
    return head; 
}
```

Python Code: 
```python
def convertV2LL(v):
    if not v:
        return None

    head = Node(v[0])
    move = head
    for value in v[1:]:
        move.next = Node(value)
        move = move.next

    return head
```

### print/display the LL:

cpp code: 
```cpp

void printLL(Node *head)
{
    while (head)
    {

        cout << head->data << " ";
        head = head->next;
    }
}

```

python code:
```python
def printLL(head):
    temp = head
    while (temp.next):
        print(temp.data, end=" ")
        temp = temp.next
    print()
```

## Basic Operations performed on LL:

### 1. Insertion
- Insert at head
- Insert at tail 
- Insert at k postion 
- Insert before ele

cpp code:

```cpp
#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

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

void printLL(Node *head)
{
    while (head)
    {

        cout << head->data << " ";
        head = head->next;
    }
}

Node *insertEleHead(Node *head, int val)
{
    Node *temp = new Node(val, head);
    return temp;
}

Node *insertEleTail(Node *head, int val)
{
    if (head == NULL)
    {
        return new Node(val);
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    Node *new_node = new Node(val);
    temp->next = new_node;

    return head;
}

Node *insertKpostion(Node *head, int k, int val)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(val);
        }
        else{
            return head;
        }
    }
    //insert at first postion
    if(k == 1){
        return new Node(val, head);
    }
    int cnt = 0;
    Node *temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k-1){
            Node *x = new Node(val,temp->next);
            temp -> next = x;
            break;
        }
        temp = temp -> next;
    }
    return head;
}

Node *insertBeforeValue(Node *head, int ele, int val)
{
    if (head == NULL)
    {
        if(head-> data == val){
            return new Node (ele,head);
        }
    }
    //insert at first postion
    Node *temp = head;
    while(temp-> next != NULL){
        if(temp -> next -> data == ele){
            Node *x = new Node(val,temp->next);
            temp -> next = x;
            break;
        }
        temp = temp -> next;
    }
    return head;
}


int main()
{
    vector<int> v1 = {3, 8, 9, 10};
    Node *head = convertArrtoLL(v1);
    printLL(head);
    cout << endl;
    // head = insertEleHead(head, 100);
    head = insertBeforeValue(head,9, 7);
    printLL(head);
    return 0;
}


```

### 2. Deletion
- Delete at head
- Delete at tail 
- Delete at k postion 
- Delete before ele

cpp code:

```cpp
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


#include <iostream>
using namespace std;

// node -- custom data type

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *RemoveHead(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node *RemoveTail(Node *head)
{
    // if it has a single node in the list or no nodes are presnt
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* RemoveKNode(Node* head, int k){
    if(head == NULL) return NULL;
    if(k == 1) return RemoveHead(head);
    int cnt = 0;
    Node* temp = head;
    Node *prev = NULL;
    while(cnt!=k){
        cnt++;
        if(cnt == k){
            prev -> next = prev -> next -> next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* RemoveKele(Node* head, int ele){
    if(head == NULL) return NULL;
    if(head -> data == ele) return RemoveHead(head);
    Node* temp = head;
    Node *prev = NULL;
    while(temp!=NULL){
        if(temp -> data == ele){
            prev -> next = prev -> next -> next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// {4,9,12,30} => convert into LL 4 -> 9 -> 12 -> 30
Node *convertVecToLL(vector<int> &arr)
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

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    vector<int> v1 = {4, 9, 12, 30};
    Node *head = convertVecToLL(v1);
    printList(head);
    head = RemoveKele(head,9);
    printList(head);

    return 1;
}
```

 
