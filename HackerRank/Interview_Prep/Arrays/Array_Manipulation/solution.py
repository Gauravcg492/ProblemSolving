#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the arrayManipulation function below.
def arrayManipulation(n, queries):
    arr = [0] * n
    maxArr = 0
    for i in queries:
        a = i[0]
        b = i[1]
        k = i[2]
        arr[a-1] += k
        if b < n: arr[b] -= k
    sums = 0
    for i in arr:
        sums += i
        maxArr = max(sums, maxArr)
    return maxArr