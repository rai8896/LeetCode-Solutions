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
14    bool isCompleteTree(TreeNode* root) {
15
16
17        queue<TreeNode*> q;
18        q.push(root);
19
20        bool seenNull = false;
21
22        while(!q.empty()){
23            TreeNode* node = q.front();
24            q.pop();
25
26            if(node == NULL){
27                seenNull = true;
28            }
29            else{
30                if(seenNull) return false;
31
32                q.push(node->left);
33                q.push(node->right);
34            }
35        }
36
37        return true;
38        
39    }
40};