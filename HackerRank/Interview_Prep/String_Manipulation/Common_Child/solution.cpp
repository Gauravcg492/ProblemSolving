#include <bits/stdc++.h>

using namespace std;

// Complete the commonChild function below.
int commonChild(string s1, string s2) {
    int n = s1.size();
    vector<vector<int>> counter(n+1, vector<int>(n+1,0));
    for(int i=1; i<n+1; ++i)
    {
        for(int j=1; j<n+1; ++j)
        {
            if(s1[i-1] == s2[j-1])
            {
                counter[i][j] = counter[i-1][j-1] + 1;
            } else
            {
                counter[i][j] = max(counter[i-1][j],counter[i][j-1]);
            }
        }
    }
    return counter[n][n];
}