/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> printList(Node *head) {
        vector<int> ans;
        Node* temp = head;

        while (temp != NULL) {
            ans.push_back(temp->data);
            temp = temp->next;
        }

        return ans;
    }
};
