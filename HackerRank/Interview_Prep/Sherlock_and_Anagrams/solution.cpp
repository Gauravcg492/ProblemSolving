#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
    unordered_map<string,int> s_dict;
    int pairs = 0;
    int len = s.size();
    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<len+1; j++)
        {
            string sub = s.substr(i,j-i);
            sort(sub.begin(),sub.end());
            if(s_dict.find(sub) == s_dict.end())
            {
                s_dict[sub] = 0;
            }
            s_dict[sub] += 1;
        }
    }
    for(auto i: s_dict)
    {
        int val = i.second;
        if(val > 1)
        {
            pairs += ((val*(val-1))/2);
        }
    }
    return pairs;
}