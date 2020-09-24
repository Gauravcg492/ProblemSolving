#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the commonChild function below.
def commonChild(s1, s2):
    n = len(s1)
    prev, cur = [0]*(n+1), [0]*(n+1)
    for i in range(1,n+1):
        for j in range(1,n+1):
            if s1[i-1] == s2[j-1]:
                cur[j] = 1 + prev[j-1]
            else:
                if cur[j-1] > prev[j]:
                    cur[j] = cur[j-1]
                else:
                    cur[j] = prev[j]
        prev,cur = cur,prev
    return prev[n]