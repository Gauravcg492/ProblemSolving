#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the substrCount function below.
def substrCount(n, s):
    counter = n
    for i in range(n-1):
        for j in range(i+1,n):
            if s[i] == s[j]:
                counter += 1
            else:
                if s[i:j] == s[j+1:2*j-i+1]:
                    counter+=1
                break
    return counter