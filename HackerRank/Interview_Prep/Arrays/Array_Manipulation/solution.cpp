#include <bits/stdc++.h>

using namespace std;

// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<int> arr(n,0);
    for(vector<int> q: queries)
    {
        int a = q[0];
        int b = q[1];
        int k = q[2];
        arr[a-1] += k;
        if(b<n)
        {
            arr[b] -= k;
        }
    }
    long sum = 0;
    long maxSum = 0;
    for(int i: arr)
    {
        sum += i;
        maxSum = max(sum,maxSum);
    }
    return maxSum;
}