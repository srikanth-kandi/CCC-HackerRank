#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'makingAnagrams' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. STRING s1
#  2. STRING s2
#


def makingAnagrams(a, b):
    aString = [0]*26
    for ch in a:
        aString[ord(ch)-97] += 1

    bString = [0]*26
    for ch in b:
        bString[ord(ch)-97] += 1

    deletions = 0
    for i in range(len(aString)):
        deletions += math.fabs(aString[i]-bString[i])

    return int(deletions)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s1 = input()

    s2 = input()

    result = makingAnagrams(s1, s2)

    fptr.write(str(result) + '\n')

    fptr.close()
