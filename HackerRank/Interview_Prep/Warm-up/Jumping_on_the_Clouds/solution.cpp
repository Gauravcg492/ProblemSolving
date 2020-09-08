#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {
    int jumps = 0;
    int i = 0;
    while(i < c.size()-2)
    {
        if(c[i+2] == 0)
        {
            i += 2;
        } else{
            i++;
        }
        jumps++;
    }
    if(i < c.size()-1)
    {
        jumps++;
    }
    return jumps;
}