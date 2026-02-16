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
15void inorder(TreeNode* root,  vector<int> &ans)
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
26    bool isValidBST(TreeNode* root) {
27    vector<int> ans;
28    inorder(root,ans);
29    for(int i=1;i<ans.size();i++)
30    {
31        if(ans[i]<=ans[i-1])
32        {
33            return 0;
34        }
35    }
36    return 1;
37    }
38};
