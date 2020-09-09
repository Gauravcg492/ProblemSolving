#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumSwaps function below.
def minimumSwaps(arr):
    swaps = 0
    di = dict(zip(arr, range(1,len(arr)+1)))
    for i in range(1, len(arr)+1):
        if di[i] != i:
            di[arr[i-1]] = di[i]
            arr[di[i]-1] = arr[i-1]
            swaps += 1
    return swaps