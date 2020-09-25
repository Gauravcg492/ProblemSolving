#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the luckBalance function below.
def luckBalance(k, contests):
    contests = sorted(contests, reverse=True)
    total_luck = 0
    for luck,imp in contests:
        if imp == 0:
            total_luck += luck
        elif k > 0:
            total_luck += luck
            k -= 1
        else:
            total_luck -= luck
    return total_luck
