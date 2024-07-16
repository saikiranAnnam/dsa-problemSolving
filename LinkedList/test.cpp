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
