#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* reverse(LinkedListNode<int> *node)
{
    LinkedListNode<int> *p=NULL, *c=node, *n=node->next;

    while(c!=NULL)
    {
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL)n=n->next;
    }

    return p;
}

bool isPalindrome(LinkedListNode<int> *head) {
    if(head==NULL || head->next==NULL)
        return true;

    LinkedListNode<int> *slow=head, *fast=head, *mid;

    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }

    slow->next = reverse(slow->next);
    mid=slow->next;
    fast=head;

    while(mid!=NULL)
    {
        if(fast->data != mid->data)
        {
            reverse(slow->next);
            return false;
        }
        fast=fast->next;
        mid=mid->next;
    }

    reverse(slow->next);
    return true;
}