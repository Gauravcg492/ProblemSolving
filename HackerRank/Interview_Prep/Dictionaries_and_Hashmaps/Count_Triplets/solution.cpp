#include <bits/stdc++.h>

using namespace std;

// Complete the countTriplets function below.
long countTriplets(vector<long> arr, long r) {
    long triplets = 0;
    unordered_map<long,long> doublets;
    unordered_map<long,long> counter;
    for(auto it=arr.rbegin(); it!=arr.rend(); ++it)
    {
        long i = *it;
        long j = i*r;
        if(doublets.find(j)==doublets.end()) doublets[j] = 0;
        triplets += doublets[j];
        if(doublets.find(i)==doublets.end()) doublets[i] = 0;
        if(counter.find(j)==counter.end()) counter[j] = 0;
        doublets[i] += counter[j];
        if(counter.find(i)==counter.end()) counter[i] = 0;
        counter[i]++;
    } 
    return triplets;
}