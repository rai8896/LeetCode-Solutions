1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14
15TreeNode* BST(vector<int>&preorder,int &index,int lower,int upper)
16{
17//base cases
18    if(index==preorder.size()|| lower>preorder[index]|| upper<preorder[index])
19    {
20        return NULL;
21    }
22
23    TreeNode* root=  new TreeNode(preorder[index++]);
24    root->left=BST( preorder,index,lower,root->val);
25    root->right=BST(preorder,index,root->val,upper);
26    return root;
27
28    
29}
30    TreeNode* bstFromPreorder(vector<int>& preorder) {
31        int index=0;
32      return  BST(preorder,index,INT_MIN,INT_MAX);
33
34
35
36        
37    }
38};