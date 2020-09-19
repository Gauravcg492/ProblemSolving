#!/bin/python3

import math
import os
import random
import re
import sys

def merge(a,b,c, counter):
    n = len(a)
    x = len(b)
    y = n - x
    #print(a,b,c)
    j = 0
    k = 0
    for i in range(n):
        if j<x and (k>=y or b[j]<=c[k]):
            a[i] = b[j]
            counter[0] += k
            j += 1
        elif k < y:
            a[i] = c[k]
            k += 1
def mergeSort(arr, n,counter):
    if n > 1:
        m = n//2
        b = arr[:m]
        c = arr[m:]
        mergeSort(b,m,counter)
        mergeSort(c,n-m,counter)
        merge(arr,b,c,counter)

def countInversions(arr):
    counter = [0]
    mergeSort(arr, len(arr),counter)
    return counter[0]