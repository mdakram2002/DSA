#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // Distructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data: " << value << endl;
    }
};


void insertNode(Node *&tail, int element, int data)
{
    // check empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode; // becouse of circular linkedlist
    }
    else
    {
        // non-empty list
        // assuming the element is present in linked list
        Node *curr = tail;

        // element searching or traversing
        while (curr->data != element)
        {

            curr = curr->next;
        }
        // element found curr is -> repersensting node of element
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}


void deleteNode(Node* &tail, int value){

    // list is empty
    if(tail == NULL){
        cout << "list is empty, please check agian: " << endl;
        return;
    }
    else{
        // non-empty list
        // assuming that 'value' is repersent in the linked list
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){

            prev = curr;
            curr = curr -> next;
        }
  
        prev -> next = curr -> next;

        // One Node linked list
        if(curr == prev){
            tail = NULL;
        }

        // Multiple Node Linked List
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr; //for memory free

    }
}

void print(Node *tail)
{
    Node *temp = tail;
    //at least one time is execute

    if(tail == NULL){
        cout << "Empty linked list: " << endl;
        return;
    }
    do {
        cout << tail->data << " ";
        tail = tail->next;
        
    } while (tail != temp);
    cout << endl;
}


int main()
{
    Node *tail = NULL;

    // empty list
    insertNode(tail, 3, 2);
    print(tail);

    insertNode(tail, 2, 3);
    print(tail);

    // insertNode(tail, 3, 4);
    // print(tail);

    // insertNode(tail, 4, 5);

    // insertNode(tail, 5, 6);
    // print(tail);

    // insertNode(tail, 6, 7);
    // print(tail);

    // insertNode(tail, 7, 8);
    // print(tail);

    cout << endl;
    deleteNode(tail, 3);
    print(tail);
    

    cout << endl;
    return 0;
}