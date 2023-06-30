/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node *result = new Node();
    Node *dummy = result;
    int sum=0, carry=0;

    while(num1 != NULL || num2 != NULL || carry)
    {
        if(num1 != NULL)
        {
            sum += num1->data;
            num1 = num1->next;
        }
        if(num2 != NULL)
        {
            sum += num2->data;
            num2 = num2->next;
        }

        sum += carry;
        carry = sum/10;
        sum = sum%10;

        Node *newNode = new Node(sum);
        result->next = newNode;
        result = result->next;
        sum = 0;
    }

    return dummy->next;
}
