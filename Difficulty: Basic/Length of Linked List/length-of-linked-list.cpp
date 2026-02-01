/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        Node* temp=head;
        int count=0;
        
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
};