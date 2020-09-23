#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter

# Complete the makeAnagram function below.
def makeAnagram(a, b):
    ac = Counter(a)
    for i in b:
        if i not in ac:
            ac[i] = 0
        ac[i] -= 1
    return sum([abs(i) for i in ac.values()])