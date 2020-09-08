#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int len = s.size();
    long c = count(s.begin(), s.end(), 'a')*(n/len);
    auto it = s.begin();
    c += count(it, it+(n%len), 'a');
    return c;
}