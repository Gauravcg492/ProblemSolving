#include <bits/stdc++.h>

using namespace std;

// Complete the checkMagazine function below.
void checkMagazine(vector<string> magazine, vector<string> note) {
    unordered_map<string,int> m_dict;
    for(string s: magazine)
    {
        if(m_dict.find(s) == m_dict.end())
        {
            m_dict[s] = 1;
        } else 
        {
            m_dict[s]++;
        }
    }
    for(string s: note)
    {
        if((m_dict.find(s) == m_dict.end()) || m_dict[s] == 0)
        {
            cout<<"No"<<endl;
            return;
        }
        m_dict[s]--;
    }
    cout<<"Yes"<<endl;
    return;
}