#include <bits/stdc++.h>

using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s) {
    long counter = n;
    for(int i=0; i<n-1; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            if(s[j] == s[i])
            {
                counter++;
            } else
            {
                if(s.compare(i,j-i, s, j+1, 2*j-i-j) == 0)
                {
                    counter++;
                }
                break;
            }
        }
    }
    return counter;
}