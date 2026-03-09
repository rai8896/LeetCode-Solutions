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
14    void inorder(TreeNode* root,vector<int>&arr)
15    {
16        if(!root)
17        {
18            return;
19        }
20        inorder(root->left,arr);
21        arr.push_back(root->val);
22        inorder(root->right,arr);
23    
24    }
25
26    TreeNode* Build(vector<int>&arr,int low,int high)
27    {
28        if(low>high)
29        {
30            return NULL;
31        }
32        int mid=(low+(high-low)/2);
33         TreeNode* root = new TreeNode(arr[mid]);
34         root->left=Build(arr,low,mid-1);
35         root->right=Build(arr,mid+1,high);
36         return root;
37         
38
39    }
40
41    TreeNode* balanceBST(TreeNode* root) {
42        
43        vector<int>arr;
44        inorder(root,arr);
45        return Build(arr,0,arr.size()-1);
46    }
47};