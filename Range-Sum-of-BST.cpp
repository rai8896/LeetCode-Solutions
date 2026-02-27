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
14    int rangeSumBST(TreeNode* root, int low, int high) {
15
16             if(root==NULL)
17             {
18                return 0;
19             }
20             int sum=0;
21             if(root->val>=low && root->val<=high)
22             {
23                sum= sum+root->val;
24             }
25            int left= rangeSumBST(root->left,low,high);
26            int right= rangeSumBST(root->right,low,high);
27             return sum+left+right;
28
29        
30    }
31};