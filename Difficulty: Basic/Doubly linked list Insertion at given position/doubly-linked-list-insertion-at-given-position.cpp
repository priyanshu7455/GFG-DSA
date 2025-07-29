/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // code here
        int count=0;
        Node* number=new Node(data);
        Node* temp=head;
        while(temp!=NULL){
            if(count==pos) break;
            temp=temp->next;
            count++;
        }
        Node* front=temp->next;
        temp->next=number;
        number->prev=temp;
        number->next=front;
        
        // front->prev=number;
        if (front != NULL) {
            front->prev = number;
        }
        
        return head;
    }
};