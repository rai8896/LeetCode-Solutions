1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        // lenght different
5        if(s.size()!=t.size())
6        {
7            return false;
8        }
9        int freq[26]={0};
10        for( char &ch:s)
11        {
12            freq[ch-'a']++;
13        }
14        // remove charater using t
15        for(char &ch:t)
16        {
17            freq[ch-'a']--;
18        }
19
20        // check kar lo freq zero ho gyi yaa nahi
21        for(int i=0;i<26;i++)
22        {
23            if(freq[i]!=0)
24            {
25                return false;
26            }
27        }
28        return true;
29
30
31    }
32};