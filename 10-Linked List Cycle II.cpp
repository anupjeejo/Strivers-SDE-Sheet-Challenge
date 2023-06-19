/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
         public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

Node *firstNode(Node *head)
{
    if(head == NULL || head->next == NULL)
        return NULL;

    Node *fast = head, *slow = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) break;
    }

    if(fast == NULL || fast->next == NULL) 
        return NULL;

    fast = head;

    while( fast != slow)
    {
        fast = fast->next;
        slow = slow->next;
    }

    return slow;
}