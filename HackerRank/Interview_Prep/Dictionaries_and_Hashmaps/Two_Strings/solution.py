#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the twoStrings function below.
def twoStrings(s1, s2):
    s_set = set(s1)
    for i in s2:
        if i in s_set:
            return "YES"
    return "NO"