#include <bits/stdc++.h>

using namespace std;

// Complete the luckBalance function below.
int luckBalance(int k, vector<vector<int>> contests) {
    int luck = 0;
    sort(contests.rbegin(), contests.rend());
    for(int i=0; i<contests.size(); ++i)
    {
        if(contests[i][1] == 0)
        {
            luck += contests[i][0];
        } else if(k > 0)
        {
            luck += contests[i][0];
            k--;
        } else
        {
            luck -= contests[i][0];
        }
    }
    return luck;
}