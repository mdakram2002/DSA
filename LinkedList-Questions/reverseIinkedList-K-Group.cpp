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
//funtion of Reverse linkedlist for k-Group.
Node *kReverse(Node *head, int k)
{

    // base case
    if (head == NULL)
    {
        return NULL;
    }
    // step1: for reverse first k node

    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    //step2: Recursion will handeld.
    if(next != NULL){
        head -> next = kReverse(next, k);

    }
    //step3: return head of reverse list.
    return prev;
}