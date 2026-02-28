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
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14
15        ListNode* p= new ListNode(0);
16
17         ListNode* temp=p;
18         int carry=0;
19
20         while(l1 ||l2||carry)
21         {
22            int sum=carry;
23            if(l1)
24            {
25                sum+=l1->val;
26                l1=l1->next;
27            }
28
29            if(l2)
30            {
31                sum+=l2->val;
32                l2=l2->next;
33            }
34
35             carry=sum/10;
36             temp->next=new ListNode(sum%10);
37             temp=temp->next;
38         }
39        
40        return p->next;
41    }
42};