class Solution {
public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        Node* temp = *head_ref;

        while (temp != NULL) {
            if (temp->data == x) {
                Node* nextnode = temp->next;
                Node* back = temp->prev;

                if (temp == *head_ref) {
                    *head_ref = nextnode;
                }

                if (nextnode) nextnode->prev = back;
                if (back) back->next = nextnode;

                delete temp;
                temp = nextnode;
            } else {
                temp = temp->next;
            }
        }
    }
};
