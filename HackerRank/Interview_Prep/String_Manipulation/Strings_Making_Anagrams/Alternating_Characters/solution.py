#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the alternatingCharacters function below.
def alternatingCharacters(s):
    deletions = 0
    for i in range(1,len(s)):
        if s[i] == s[i-1]:
            deletions += 1
    return deletions