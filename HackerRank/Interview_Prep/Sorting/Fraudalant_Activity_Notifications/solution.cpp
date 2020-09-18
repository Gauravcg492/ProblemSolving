#include <bits/stdc++.h>

using namespace std;

// Complete the activityNotifications function below.
int activityNotifications(vector<int> expenditure, int d) {
    vector<int> s_list(201,0);
    int activity = 0;
    for(int i=0; i<d; i++)
    {
        s_list[expenditure[i]]++;
    }
    float middle = (d-1)/2.0;
    int median_left = floor(middle);
    int median_right = ceil(middle);
    int median;
    int left,right,counter;
    for(int i=d; i<expenditure.size(); i++)
    {
        left = 0;
        counter = 0;
        while(counter <= median_left)
        {
            counter += s_list[left++];
        }
        right = left;
        while(counter <= median_right)
        {
            counter += s_list[right++];
        }
        median = (left + right -2);
        if(expenditure[i] >= median) activity++;
        s_list[expenditure[i-d]]--;
        s_list[expenditure[i]]++;
    }
    return activity;

}