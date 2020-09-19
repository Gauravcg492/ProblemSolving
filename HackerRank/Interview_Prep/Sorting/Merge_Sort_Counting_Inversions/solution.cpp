#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int> &c, long &counter)
{
    int n = a.size();
    int x = b.size();
    int y = c.size();
    int j = 0;
    int k = 0;
    for(int i=0; i<n; i++)
    {
        if((j < x) && ((k>=y) || (b[j] <= c[k])))
        {
            a[i] = b[j++];
            counter += k;
        } else if (k < y)
        {
            a[i] = c[k++];
        }
    }
}

void mergeSort(vector<int> &arr, int n, long &counter)
{
    if(n > 1)
    {
        long m = n/2;
        vector<int> b = vector<int>(arr.begin(), arr.begin()+m);
        vector<int> c = vector<int>(arr.begin()+m, arr.end());
        mergeSort(b,m,counter);
        mergeSort(c,n-m,counter);
        merge(arr,b,c,counter);
    }
}
// Complete the countInversions function below.
long countInversions(vector<int> arr) {
    long counter = 0;
    mergeSort(arr,arr.size(), counter);
    return counter;
}