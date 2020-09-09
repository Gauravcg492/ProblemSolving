#include <bits/stdc++.h>

using namespace std;

// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
    int n = a.size();
    vector<int> result(n,0);
    for(int i=0; i<n; ++i)
    {
        result[i] = a[(i+d)%n];
    }
    return result;
}