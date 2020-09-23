#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    unordered_map<char,int> s_counter;
    unordered_map<int,int> counter;
    for(char c: s)
    {
        s_counter[c]++;
    }
    for(auto it: s_counter)
    {
        counter[it.second]++;
    }
    if(counter.size() == 1)
    {
        return "YES";
    } else if(counter.size() == 2)
    {
        vector<int> keys;
        for(auto it: counter)
        {
            keys.push_back(it.first);
        } 
        if((counter[keys[0]] == 1) && (keys[0]-1==keys[1] || keys[0]==1))
        {
            return "YES";
        } else if(counter[keys[1]]==1 && (keys[1]-1==keys[0] || keys[1]==1))
        {
            return "YES";
        }
    }
    return "NO";
}