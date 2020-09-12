#include <bits/stdc++.h>

using namespace std;

// Complete the countSwaps function below.
void countSwaps(vector<int> a) {
    int n = a.size();
    int swaps = 0;
    int temp;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n-1; ++j)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swaps++;
            }
        }
    }
    cout<<"Array is sorted in "<<swaps<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    return;
}