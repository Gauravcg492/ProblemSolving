#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter

# Complete the reverseShuffleMerge function below.
def reverseShuffleMerge(s):
    needed_chars = Counter(s)
    used_chars = Counter()
    remaining_chars = Counter(s)
    for i in needed_chars:
        needed_chars[i] //= 2
    res = []
    for i in s[::-1]:
        if used_chars[i] < needed_chars[i]:
            while res and res[-1] > i and (used_chars[res[-1]] + remaining_chars[res[-1]] - 1) >= needed_chars[res[-1]]:
                char = res.pop()
                used_chars[char] -= 1
            res.append(i)
            used_chars[i] += 1
        remaining_chars[i] -= 1
    return "".join(res)