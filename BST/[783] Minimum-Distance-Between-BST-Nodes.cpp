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
15   void inorder(TreeNode* root,  vector<int> &ans)
16{
17    if(!root)
18    {
19        return;
20    }
21    inorder(root->left,ans);
22    ans.push_back(root->val);
23    inorder(root->right,ans);
24
25}
26    int minDiffInBST(TreeNode* root) {
27
28    
29     vector<int>ans;
30    inorder(root,ans);
31    int a=INT_MAX;
32    for(int i=0;i<ans.size()-1;i++)
33    {
34        a=min(a,abs(ans[i]-ans[i+1]));
35    }
36
37    return a;
38        
39    }
40};
