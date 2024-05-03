#include <iostream>
#include <map>
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
bool isCircularLinkedList(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return true;
    }
    return false;
}
bool dedectLoopILinkedList(Node *head)
{

    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != NULL)
    {

        // cycle is persent
        if (visited[temp] == true)
        {
            return true;
        }

        // if cycle is not persent then
        visited[temp] = true;
        temp = temp->next; // going to next loop
    }
    return false;
}

Node *floydeDedectLoop(Node *head)
{

    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;
        if (slow == fast)
        {
            cout << "Persent at: " << slow->data << endl;
            return slow;
        }
    }

    return NULL;
}

Node *getStartingNode(Node *head)
{

    if (head == NULL)
    {
        return NULL;
    }

    Node *intersection = floydeDedectLoop(head);
    Node *slow = head;

    while (slow != intersection)
    {

        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node *head)
{

    if (head == NULL)
        return;

    Node *startOfLoop = getStartingNode(head);
    Node *temp = startOfLoop;

    while (temp->next != startOfLoop)
    {

        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    // Node *head = NULL;
    // Node *tail = NULL;
    print(head);

    insertAtTail(tail, head, 12);
    print(head);

    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    cout << endl;

    insertAtHead(tail, head, 16);
    print(head);


    insertAtHead(tail, head, 13);
    print(head);


    if (floydeDedectLoop(head) != NULL)
    {
        cout << "LOOP is Persent: " << endl;
    }
    else
    {
        cout << "LOOP is Absent: " << endl;
    }

    Node *loop = getStartingNode(head);
    cout << "starting loop: " << loop->data << endl;

    removeLoop(head);
    print(head);

    // Time Complexity is O(n) ans Space Complexity is O(1);

    return 0;
}