#include <iostream>
#include <vector>
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
bool checkPalindromeLL(vector<int> arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (arr[s] != arr[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

bool isPalindromeLL(Node *head)
{
    vector<int> arr;
    Node *temp = head;

    while (temp != NULL)
    {

        arr.push_back(temp->data);
        temp = temp->next;
    }
    return checkPalindromeLL(arr);
}
//-----------------------------------------------------------------------
// Second Approach->

Node *getMid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node *reverse(Node *head)
{
    if (head->next = NULL)
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;
        while (curr != NULL)
        {
            next = curr->next;
            curr = next->prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
}

bool isPalindrome(Node *head)
{

    if (head->next == NULL)
    {
        return true;
    }
    // step1 find middle
    Node *middle = getMid(head);

    // step2 revers linkedlist after middle
    Node *temp = middle->next;
    middle->next = reverse(temp);

    // step3 compair both haven
    Node *head1 = head;
    Node *head2 = middle->next;

    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    // step4 repeat step 2
    temp = middle->next;
    middle->next = reverse(temp);

    return true;
}