#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the sherlockAndAnagrams function below.
def sherlockAndAnagrams(s):
    s_dict = {}
    pairs = 0
    for i in range(len(s)):
        for j in range(i+1, len(s)+1):
            sub = "".join(sorted(s[i:j]))
            if sub not in s_dict:
                s_dict[sub] = 0
            s_dict[sub] += 1
    for i in s_dict.keys():
        val = s_dict[i]
        if val > 1:
            pairs += ((val * (val - 1))//2)
    return pairs
