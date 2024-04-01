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

int getLength(Node *head)
{

    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}
Node *findeMiddle(Node *head)
{

    int len = getLength(head);
    int ans = (len / 2);

    Node *temp = head;
    int count = 0;

    while (count < ans)
    {
        temp = temp->next;
        count++;
    }
    return temp;
};
// second Approch-->
Node *getMiddle(Node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    if (head->next->next == NULL)
    {
        return head->next;
    }
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

int main()
{

    return 0;
}