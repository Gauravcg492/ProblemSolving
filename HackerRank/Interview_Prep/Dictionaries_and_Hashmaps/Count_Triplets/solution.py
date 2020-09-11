#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter
# Complete the countTriplets function below.
def countTriplets(arr, r):
    counter = {}
    doublets = {}
    triplets = 0
    for i in arr[::-1]:
        j = i*r
        k = j*r
        triplets += doublets.get((j,k),0)
        doublets[(i,j)] = doublets.get((i,j),0) + counter.get(j,0)
        counter[i] = counter.get(i,0) + 1
    return triplets