#include <bits/stdc++.h>

using namespace std;

// Complete the minimumAbsoluteDifference function below.
int minimumAbsoluteDifference(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int min_abs = abs(arr[0]-arr[1]);
    for(int i=1; i<arr.size()-1; ++i)
    {
        min_abs = min(min_abs, abs(arr[i]-arr[i+1]));
    }
    return min_abs;
}