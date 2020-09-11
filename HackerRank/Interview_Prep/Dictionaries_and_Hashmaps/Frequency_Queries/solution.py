#!/bin/python3

import math
import os
import random
import re
import sys
from collections import defaultdict

# Complete the freqQuery function below.
def freqQuery(queries):
    dictionary = {}
    frequency = defaultdict(set)
    output = []
    for q in queries:
        val = dictionary.get(q[1], 0)
        if q[0] == 1:
            frequency[val].discard(q[1])
            dictionary[q[1]] = val + 1
            frequency[val+1].add(q[1])
        elif q[0] == 2:
            frequency[val].discard(q[1])
            dictionary[q[1]] = max(val-1, 0)
            frequency[val-1].add(q[1])
        elif q[0] == 3:
            result = 1 if frequency[q[1]] else 0
            output.append(result)
    #print(output)
    return output
