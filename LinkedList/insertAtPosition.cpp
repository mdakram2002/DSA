#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int data){

    // new Node creation
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;

}
void insertAtTail(Node* &tail, int data){

    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;

}

void insertAtPosition(Node* &head, int position, int data){

    //insert at start
    if(position == 1){
        insertAtHead(head, data);
        return;
    }
    // if we want to insert an element at begining/start then this above 
    // condition is applied

    Node* temp = head;
    int count = 1;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    //create a node for data 
    Node* nodeToInsert = new Node(data);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    // created new node;
    Node* node1 = new Node(10);

    // cout << "head wala part:- " << endl;
    Node* head = node1;
    // print(head);

    // insertAtHead(head, 20);
    // print(head);

    // insertAtHead(head, 30);
    // print(head);

    cout <<"tail wala part:- " << endl;
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 20);
    print(head);

    insertAtTail(tail, 40);
    print(head);

    insertAtPosition(head, 3, 30);
    print(head);

    // if we want to insert an element at begining/start then use insertAtPosition() function with condition
    insertAtPosition(head, 1, 5);
    print(head);

    

    return 0;
}