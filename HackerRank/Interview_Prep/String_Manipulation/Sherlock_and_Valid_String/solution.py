#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter
# Complete the isValid function below.
def isValid(s):
    counter = Counter(s)
    counter = Counter(counter.values())
    if len(counter) == 1:
        return "YES"
    elif len(counter) == 2:
        key1, key2 = counter.keys()
        if counter[key1] == 1 and (key1-1 == key2 or key1 == 1) :
            return "YES"
        elif counter[key2] == 1 and (key2-1 == key1 or key2 == 1):
            return "YES"
    return "NO"