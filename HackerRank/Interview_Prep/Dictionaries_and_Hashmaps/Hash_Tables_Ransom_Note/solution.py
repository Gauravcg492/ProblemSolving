#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter

# Complete the checkMagazine function below.
def checkMagazine(magazine, note):
    if(Counter(note) - Counter(magazine)) == {}:
        print("Yes")
    else: 
        print("No")
    return