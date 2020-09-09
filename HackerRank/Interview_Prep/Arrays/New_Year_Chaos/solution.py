#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumBribes function below.
def minimumBribes(q):
    bribes = 0
    for i,j in enumerate(q):
        diff = j - i - 1
        if diff > 2:
            print("Too chaotic")
            #print(j,i,diff)
            return
        for k in range(max(0,j-2), i):
            if q[k] > j:
                bribes += 1
    print(bribes)
    return