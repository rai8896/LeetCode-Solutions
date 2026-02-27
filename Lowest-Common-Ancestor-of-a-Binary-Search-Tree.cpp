1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
14
15
16         if(!root)
17         {return NULL;}
18         if(root->val> p->val && root->val> q->val)
19         {
20          return   lowestCommonAncestor(root->left,p,q);
21         }
22          if(root->val< p->val && root->val< q->val)
23         {
24             return lowestCommonAncestor(root->right,p,q);
25         }
26          else{
27            return root;
28          }
29        
30    }
31};