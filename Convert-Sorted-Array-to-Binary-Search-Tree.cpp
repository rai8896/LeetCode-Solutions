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
14TreeNode * buildtree(vector<int>& nums,int start,int end)
15{
16     if(start>end) return NULL;
17
18    int mid=start+(end-start)/2;
19    TreeNode* root= new TreeNode(nums[mid]);
20    root->left=buildtree(nums,start,mid-1);
21    root->right=buildtree(nums,mid+1,end);
22
23     return root;
24
25
26
27}
28    TreeNode* sortedArrayToBST(vector<int>& nums) {
29
30    int n=nums.size()-1;
31
32    return buildtree(nums,0,n);
33    }
34};