#include <bits/stdc++.h>

using namespace std;

// Complete the reverseShuffleMerge function below.
string reverseShuffleMerge(string s) {
    vector<int> remaining_chars(26,0);
    vector<int> used_chars(26,0);
    vector<char> res;
    for(int i=0; i<s.length(); ++i)
    {
        remaining_chars[s[i] - 'a']++;
    }
    vector<int> needed_chars(remaining_chars.begin(),remaining_chars.end());
    for(int i=0; i<26; ++i)
    {
        needed_chars[i] /= 2;
    }
    for(int i=s.size()-1; i>=0; --i)
    {
        if(used_chars[s[i]-'a'] < needed_chars[s[i]-'a'])
        {
            while(res.size() > 0 && res.back() > s[i] && (used_chars[res.back()-'a'] + remaining_chars[res.back()-'a'] - 1) >= needed_chars[res.back()-'a'])
            {
                used_chars[res.back()-'a']--;
                res.pop_back();   
            }
            res.push_back(s[i]);
            used_chars[s[i]-'a']++;
        }
        remaining_chars[s[i]-'a']--;
    }
    return string(res.begin(), res.end());
}