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
14    //  void inorder(TreeNode* root, vector<int> &ans)
15    // {
16    //     if(!root)
17    //     {
18    //         return;
19    //     }
20    //     inorder(root->left,ans);
21    //     ans.push_back(root->val);
22    //     inorder(root->right,ans);
23    // }
24
25
26
27    void Ksmall(TreeNode* root,int &k,int &p)
28    {
29        // inorder lagao
30        if(!root)
31        {
32            return;
33        }
34        Ksmall(root->left,k,p);
35        k--;
36        if(k==0) 
37        {p=root->val;
38        return;
39        }
40       
41        Ksmall(root->right,k,p);
42    }
43    int kthSmallest(TreeNode* root, int k) {
44
45        // vector<int>ans;
46        // inorder(root,ans);
47        // return ans[k-1];
48    int p;
49        Ksmall(root,k,p);
50        return p;
51    }
52
53};