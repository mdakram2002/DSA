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

Node<int> *sortTwoList(Node<int> *first, Node<int> *second)
{

    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }
}