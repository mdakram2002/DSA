#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //Distructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node with data: " << value << endl;
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
void deleteNode(int position, Node* &head){

    //deleting the starting node or first node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;

        //memory free
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* current = head;
        Node* previous = NULL;

        int count = 1;
        while(count < position){
            previous = current;
            current = current -> next;
            count++;
        }
        previous -> next = current -> next;
        //memory free
        current -> next = NULL;
        delete current;
    }
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
    Node* head = node1;
    
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

    cout << endl;
    cout <<"head is: " << head -> data << endl;
    cout <<"tail is: " << tail -> data << endl;
    cout << endl;

    deleteNode(2, head); //fill the position and delete any position of node
    print(head);

    return 0;
}