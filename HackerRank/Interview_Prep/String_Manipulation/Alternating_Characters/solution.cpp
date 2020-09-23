#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
    int deletions = 0;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]==s[i-1])
        {
            deletions++;
        }
    }
    return deletions;
}
