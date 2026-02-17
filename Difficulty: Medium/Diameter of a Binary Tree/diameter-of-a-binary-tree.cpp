/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  int dia=0;
   int helper(Node* root){
       if(root==NULL){
           return 0;
       }
       int lefthight=helper(root->left);
       int righthight=helper(root->right);
       
       dia= max(dia,lefthight+righthight);
       
       return 1+max(lefthight,righthight);
   }
    int diameter(Node* root) {
        // code here
        helper(root);
        return dia;
    }
};