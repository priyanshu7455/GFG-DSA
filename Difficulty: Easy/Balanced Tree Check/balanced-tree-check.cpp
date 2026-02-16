/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int helper(Node* root){
        if(root==NULL){
            return 0;
        }
        int lefthight=helper(root->left);
        if(lefthight==-1)return -1;
        int righthight=helper(root->right);
        if(righthight==-1)return -1;
        
        if(abs(lefthight-righthight)>1)return -1;
        return max(lefthight,righthight)+1;
    }
    bool isBalanced(Node* root) {
        // code here
        return helper(root)!=-1;
        
    }
};