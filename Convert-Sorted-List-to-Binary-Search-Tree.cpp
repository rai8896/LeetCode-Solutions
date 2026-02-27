1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11/**
12 * Definition for a binary tree node.
13 * struct TreeNode {
14 *     int val;
15 *     TreeNode *left;
16 *     TreeNode *right;
17 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
18 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
19 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
20 * };
21 */
22class Solution {
23public:
24
25TreeNode* BuildBST(vector<int>&Tree,int start,int end)
26{
27    if(start>end)
28    {
29        return NULL;
30    }
31    int mid=start+(end-start+1)/2;
32    TreeNode* root= new TreeNode(Tree[mid]);
33    root->left=BuildBST(Tree,start,mid-1);
34    root->right=BuildBST(Tree,mid+1,end);
35    return root;
36
37}
38    TreeNode* sortedListToBST(ListNode* head) {
39
40
41        vector<int>Tree;
42        while(head)
43        {
44            Tree.push_back(head->val);
45            head=head->next;
46        }
47
48        return BuildBST(Tree,0,Tree.size()-1);
49        
50    }
51};