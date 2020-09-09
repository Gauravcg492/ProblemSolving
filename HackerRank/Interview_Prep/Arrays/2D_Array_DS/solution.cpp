#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int maxSum = -100;
    int s = 0;
    for(int i=0; i<arr.size()-2; ++i)
    {
        for(int j=0; j<arr.size()-2;++j)
        {
            s = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if (s > maxSum)
            {
                maxSum = s;
            }
        }
    }
    return maxSum;
}