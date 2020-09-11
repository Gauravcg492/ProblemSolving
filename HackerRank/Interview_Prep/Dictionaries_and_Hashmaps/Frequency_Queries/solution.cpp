#include <bits/stdc++.h>

using namespace std;

// Complete the freqQuery function below.
vector<int> freqQuery(vector<vector<int>> queries) {
    unordered_map<int,int> dictionary;
    unordered_map<int,unordered_set<int>> frequency;
    vector<int> output;
    for(vector<int> q: queries)
    {
        if(dictionary.find(q[1])==dictionary.end()) dictionary[q[1]] = 0;
        int val = dictionary[q[1]];
        if(q[0] == 1)
        {
            dictionary[q[1]] = val + 1;
            frequency[val].erase(q[1]);
            frequency[val+1].insert(q[1]);
        } else if(q[0] == 2)
        {
            dictionary[q[1]] = max(val-1,0);
            frequency[val].erase(q[1]);
            frequency[val-1].insert(q[1]);
        } else
        {
            int result = 0;
            if(frequency.find(q[1])!=frequency.end() && frequency[q[1]].size() > 0) result = 1;
            output.push_back(result);
        }
    }
    return output;
}