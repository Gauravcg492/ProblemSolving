#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the activityNotifications function below.
def activityNotifications(expenditure, d):
    s_list = [0]*201
    activity = 0
    for i in expenditure[:d]:
        s_list[i] += 1
    median_left = math.floor((d-1)/2)
    median_right = math.ceil((d-1)/2)
    #print(s_list[:10])
    for i,j in enumerate(expenditure[d:]):
        left = 0
        counter = 0
        while counter <= median_left:
            counter += s_list[left]
            left += 1
        right = left
        while counter <= median_right:
            counter += s_list[right]
            right += 1
        median = (left + right - 2)/2
        if j >= median*2:
            activity += 1
        s_list[expenditure[i]] -= 1
        s_list[j] += 1
    return activity