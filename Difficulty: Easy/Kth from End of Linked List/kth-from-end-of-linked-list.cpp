/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        Node* fast = head;

        for (int i = 0; i < k; i++) {
            if (fast == NULL) return -1; // k > length
            fast = fast->next;
        }

        if (fast == NULL) return head->data; // k == length

        Node* slow = head;
        while (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow->data;
    }
};
