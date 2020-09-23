#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    unordered_map<char,int> amap;
    for(char c: a)
    {
        amap[c]++;
    }
    for(char c: b)
    {
        amap[c]--;
    }
    int sum = 0;
    for(auto it: amap)
    {
        sum += abs(it.second);
    }
    return sum;
}