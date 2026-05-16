1class Solution {
2public:
3    bool uniqueOccurrences(vector<int>& arr) {
4       // constrain wala approach
5
6       vector<int>vec(2001,0);
7       for(int &x:arr)
8       {
9        vec[x+1000]++;
10
11       }
12       sort(begin(vec),end(vec));
13
14       for(int i=1;i<2001;i++)
15       {
16        if(vec[i]!=0 && vec[i]==vec[i-1])
17        {  return false;}
18       }
19       return true;
20       
21    }
22};