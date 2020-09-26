#include <bits/stdc++.h>

using namespace std;

// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int unfairness = arr[k-1] - arr[0];
    int val;
    for(int i=1; i<arr.size()-k+1; ++i)
    {
        val = arr[i+k-1] - arr[i];
        if(val < unfairness)
        {
            unfairness = val;
        }
    }
    return unfairness;
}