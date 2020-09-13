#include <bits/stdc++.h>

using namespace std;

// Complete the maximumToys function below.
int maximumToys(vector<int> prices, int k) {
    sort(prices.begin(),prices.end());
    int toys = 0;
    for(int i: prices)
    {
        if(i <= k)
        {
            k -= i;
            toys++;
        } else{
            break;
        }
    }
    return toys;
}