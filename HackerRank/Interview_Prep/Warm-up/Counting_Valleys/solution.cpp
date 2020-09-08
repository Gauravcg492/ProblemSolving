#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int valleys = 0;
    int seaLevel = 0;
    for(char c: s)
    {
        if(c=='D')
        {
            if(seaLevel == 0)
            {
                valleys++;
            }
            seaLevel--;
        } else{
            seaLevel++;
        }
    }
    return valleys;
}