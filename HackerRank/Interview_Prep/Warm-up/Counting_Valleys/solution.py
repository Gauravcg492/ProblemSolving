#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countingValleys function below.
def countingValleys(n, s):
    sealevel = 0
    valleys = 0
    for i in s:
        if i == 'D':
            if sealevel == 0:
                valleys += 1
            sealevel -= 1
        else:
            sealevel += 1
    return valleys