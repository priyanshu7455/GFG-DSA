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
    int lengthOfLoop(Node *head) {
        // code here
        Node*fast=head;
        Node* slow=head;
        int count=0;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast){
                int count=1;
                fast=fast->next;
                while(fast!=slow){
                    count++;
                    fast=fast->next;
                }
                return count;
            }
        }
        return 0;
        
    }
};