#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the hourglassSum function below.
def hourglassSum(a):
    n = len(a)
    maxSum = -100
    s = 0
    for i in range(n-2):
        for j in range(n-2):
            s = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2]
            #print(s)
            if s > maxSum:
                maxSum = s
    return maxSum
