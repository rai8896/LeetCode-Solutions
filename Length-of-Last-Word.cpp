1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int count=0;
5         int i = s.length() - 1;
6         while(i>=0 && s[i]==' ') i--;
7         while(i>=0 &&s[i]!=' ')
8         {
9            count++;
10            i--;
11         }
12
13        return count;
14    }
15};