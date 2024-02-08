#include<iostream>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool CheckSymmetric(TreeNode*left,TreeNode*right){
        if(!left&&!right){
            return true;
        }
        if(!left||!right||left->val!=right->val){
            return false;
        }
        return CheckSymmetric(left->left,right->right) && CheckSymmetric(right->left,left->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        } 
        return CheckSymmetric(root->left,root->right);
    }
};

int main(){
    Solution s;
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(2);
    root->left->left=new TreeNode(3);
    root->left->right=new TreeNode(4);
    root->right->left=new TreeNode(4);
    root->right->right=new TreeNode(3);
    cout<<s.isSymmetric(root);
    return 0;
}