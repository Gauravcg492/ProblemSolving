#include <bits/stdc++.h>

using namespace std;

// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr) {
    unordered_map<int,int> dict;
    int swaps = 0;
    int n = arr.size();
    for(int i=0; i<n; ++i)
    {
        dict[arr[i]] = i;
    }
    for(int i=1; i<= n; ++i)
    {
        if(dict[i]+1 != i)
        {
            dict[arr[i-1]] = dict[i];
            arr[dict[i]] = arr[i-1];
            swaps++;
        }
    }
    return swaps;
}