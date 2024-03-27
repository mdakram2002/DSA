#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getlength(Node *head)
{

    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
};

void insertAtHead(Node *&head, Node *&tail, int data)
{

    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAtTail(Node *&tail, Node *&head, int data)
{

    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&tail, Node *&head, int position, int data)
{

    // inserting at first position
    if (position == 1)
    {
        insertAtHead(tail, head, data);
        return;
    }
    // if we want to insert an element at begining/start then
    // this above condition is applied

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // inseting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, data);
        return;
    }

    // create a node for data
    Node *nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

bool reverseLinkedList(Node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while (curr != NULL)
    {

        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int main()
{

    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;

    Node *head = NULL;
    Node *tail = NULL;
    // print(head);

    insertAtHead(tail, head, 11);
    print(head);

    insertAtHead(tail, head, 12);
    print(head);

    reverseLinkedList(head);
    print(head);

    return 0;
}