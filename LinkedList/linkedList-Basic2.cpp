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

    // cout << node1-> data << endl;
    // cout << node1-> next << endl;
    cout << "head wala part:- " << endl;
    Node* head = node1;
    // print(head);

    // insertAtHead(head, 20);
    // print(head);

    // insertAtHead(head, 30);
    // print(head);

    cout <<"tail wala part:- " << endl;
    // tail part----------

    Node* tail = node1;
    print(head);

    insertAtTail(tail, 20);
    print(head);

    insertAtTail(tail, 30);
    print(head);

    return 0;
}