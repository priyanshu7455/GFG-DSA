/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    Node* latnode(Node* temp,int k){
        int cnt=1;
        
        while(temp!=NULL){
            if(cnt==k)return temp;
            cnt++;
            temp=temp->next;
        }
        return temp;
    }
    Node* rotate(Node* head, int k) {
        // Your code here
        if(head==NULL || k==0) return head;
        int len=1;
        Node* tail=head;
        while(tail->next!=NULL){
            len++;
            tail=tail->next;
        }
        
        if(k%len==0)return head;
        k=k%len;
        
        tail->next=head;
        Node* lastnode=latnode(head,k);
        head=lastnode->next;
        lastnode->next=NULL;
        return head;
    }
};