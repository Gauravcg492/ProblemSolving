#include <bits/stdc++.h>

using namespace std;

// Complete the getMinimumCost function below.
int getMinimumCost(int k, vector<int> c) {
    int cost = 0;
    vector<int> friends(k,0);
    int f = 0;
    sort(c.rbegin(),c.rend());
    for(int i : c)
    {
        cost += ((friends[f]+1)*i);
        friends[f]++;
        f = (f+1)%k;
    }
    return cost;
}