#!/bin/python3

import math
import os
import random
import re
import sys
import math

# Complete the repeatedString function below.
def repeatedString(s, n):
    s_len = len(s)
    return s.count("a")*(n//s_len) + s[:n%s_len].count('a')