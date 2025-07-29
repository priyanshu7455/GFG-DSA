/* A Node of the doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int x) { data = x; next = prev = NULL; }
};
*/

class Solution {
  public:
    Node* deleteNode(Node* head, int pos) {
        if (head == NULL) return NULL;

        Node* temp = head;

        // If head is to be deleted
        if (pos == 1) {
            head = head->next;
            if (head != NULL) head->prev = NULL;
            delete temp;
            return head;
        }

        int count = 1;
        while (temp != NULL && count < pos) {
            temp = temp->next;
            count++;
        }

        // If position is more than number of nodes
        if (temp == NULL) return head;

        // Adjust pointers
        if (temp->prev != NULL)
            temp->prev->next = temp->next;

        if (temp->next != NULL)
            temp->next->prev = temp->prev;

        delete temp;
        return head;
    }
};
