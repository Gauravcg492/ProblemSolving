#include <bits/stdc++.h>

using namespace std;

// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
    unordered_map<int,int> socks;
    int pairs = 0;
    for(int n: ar)
    {
        if(socks.find(n) == socks.end())
        {
            socks[n] = 1;
        } else{
            socks[n] += 1;
            if(socks[n]%2 == 0)
            {
                pairs += 1;
            }
        }
    }
    return pairs;

}