#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the getMinimumCost function below.
def getMinimumCost(k, c):
    f = 0
    friends = [0]*k
    c = sorted(c, reverse=True)
    total_cost = 0
    for i in c:
        total_cost += ((friends[f]+1)*i)
        friends[f] += 1
        f = (f+1)%k
    return total_cost