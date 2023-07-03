/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

int length(Node *node)
{
     int ctr=0;
     Node *head = node;
     while(node->next!=NULL)
     {
          ctr++;
          node=node->next;
     }
     ctr++;
     node->next = head;
     return ctr;
}

Node *rotate(Node *head, int k) {
     if(head==NULL || head->next==NULL)
          return head;

     Node *temp = head;
     int len = length(head);
     k=k%len;
     k=len-k;

     while(k>1)
     {
          temp=temp->next;
          k--;
     }

     Node *newHead = temp->next;
     temp->next=NULL;
     return newHead;
}