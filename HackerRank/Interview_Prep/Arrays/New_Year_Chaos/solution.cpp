#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {
    int bribes = 0;
    int diff;
    for(int i=0;i<q.size(); ++i)
    {
        diff = q[i] - i - 1;
        if(diff > 2)
        {
            cout<<"Too chaotic"<<endl;
            return;
        }
        for(int j=max(0,q[i]-2); j<i; ++j)
        {
            if(q[j] > q[i])
            {
                bribes++;
            }
        }
    }
    cout<<bribes<<endl;
    return;
}