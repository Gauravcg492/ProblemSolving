#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countSwaps function below.
def countSwaps(a):
    swaps = 0
    n = len(a)
    for _ in range(n):
        for i in range(n-1):
            if a[i] > a[i+1]:
                a[i],a[i+1] = a[i+1], a[i]
                swaps += 1
    print("Array is sorted in %d swaps."%swaps)
    print("First Element:", a[0])
    print("Last Element:", a[-1])
    return