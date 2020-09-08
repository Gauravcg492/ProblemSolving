#!/bin/python3
import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    pairs = 0
    socks = {}
    for i in ar:
        if i not in socks:
            socks[i] = 1
        else:
            socks[i] += 1
            if socks[i]%2 == 0:
                pairs += 1
    return pairs