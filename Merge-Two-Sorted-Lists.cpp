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
11class Solution {
12public:
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
14
15
16        // base case
17        if (list1 == NULL) return list2;
18        if (list2 == NULL) return list1;
19
20        if(list1->val<list2->val)
21        {
22            list1->next=mergeTwoLists(list1->next,list2);
23            return list1;
24        }else
25        {
26            list2->next=mergeTwoLists(list1,list2->next);
27            return list2;
28
29        }
30        
31    }
32};