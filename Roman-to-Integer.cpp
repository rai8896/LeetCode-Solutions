1class Solution {
2public:
3    int romanToInt(string s) {
4
5
6
7         unordered_map<char,int> mp;
8
9        mp['I'] = 1;
10        mp['V'] = 5;
11        mp['X'] = 10;
12        mp['L'] = 50;
13        mp['C'] = 100;
14        mp['D'] = 500;
15        mp['M'] = 1000;
16
17        int ans = 0;
18
19        for(int i = 0; i < s.size(); i++)
20        {
21            if(i < s.size()-1 && mp[s[i]] < mp[s[i+1]])
22            {
23                ans -= mp[s[i]];
24            }
25            else
26            {
27                ans += mp[s[i]];
28            }
29        }
30
31        return ans;
32    }
33        
34    
35};