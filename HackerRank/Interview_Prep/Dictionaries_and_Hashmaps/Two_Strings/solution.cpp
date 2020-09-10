#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    unordered_set<char> s_set;
    for(char c: s1)
    {
        if(s_set.find(c) == s_set.end())
        {
            s_set.insert(c);
        }
    }
    for(char c: s2)
    {
        if(s_set.find(c) != s_set.end())
        {
            return "YES";
        }
    }
    return "NO";
}
