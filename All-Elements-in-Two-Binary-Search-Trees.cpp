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
15    void inorder(TreeNode* root,vector<int>&l)
16    {
17        if(!root)
18        {
19            return;
20        }
21        inorder(root->left,l);
22        l.push_back(root->val);
23        inorder(root->right,l);
24
25    }
26    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
27
28        vector<int>ans1,ans2;
29
30        inorder(root1,ans1);
31        inorder(root2,ans2);
32
33    int i=0,j=0;
34    vector<int>ans;
35         while(i<ans1.size() && j<ans2.size())
36         {
37            if(ans1[i]<ans2[j])
38            {
39                ans.push_back(ans1[i++]);
40            }else
41            {
42                ans.push_back(ans2[j++]);
43            }
44         }
45         while(i<ans1.size())
46         {
47            ans.push_back(ans1[i++]);
48         }
49
50         while(j<ans2.size())
51         {
52            ans.push_back(ans2[j++]);
53         }
54
55        return ans;
56    }
57};