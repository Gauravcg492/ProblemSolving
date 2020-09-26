#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the maxMin function below.
def maxMin(k, arr):
    arr = sorted(arr)
    unfairness = arr[k-1] - arr[0]
    for i in range(1,len(arr)-k+1):
        val = arr[i+k-1] - arr[i]
        if val < unfairness:
            unfairness = val
    return unfairness