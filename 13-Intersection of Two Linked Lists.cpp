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

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    Node *nodeA=firstHead, *nodeB = secondHead;

    while( nodeA != nodeB)
    {
        if(nodeA == NULL)
            nodeA = secondHead;
        else
            nodeA = nodeA->next;

        if(nodeB == NULL)
            nodeB = firstHead;
        else
            nodeB = nodeB->next;    
    }

    return nodeA;
}
