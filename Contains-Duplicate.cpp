1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        
5        unordered_set<int>st;
6        for(int &x:nums)
7        {
8            st.insert(x);
9        }
10        if(st.size()==nums.size())
11        {
12            return false;
13        }
14        return true;
15        
16    }
17};