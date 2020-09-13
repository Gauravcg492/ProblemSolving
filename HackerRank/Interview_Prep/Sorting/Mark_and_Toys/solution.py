#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the maximumToys function below.
def maximumToys(prices, k):
    prices = sorted(prices)
    toys = 0
    for i in prices:
        if i <= k:
            toys += 1
            k -= i
        else:
            break
    return toys