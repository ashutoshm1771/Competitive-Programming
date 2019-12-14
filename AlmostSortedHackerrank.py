#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the almostSorted function below.
def almostSorted(arr):
    n = len(arr)
    if n ==2:
        print('yes\nswap 1 2')
        return
    temp = list()
    count=0
    for i in range(1,n-1):
        if arr[i]<arr[i-1]<=arr[i+1] and count==2:
            temp.append(i+1)
            count+=2
        if arr[i-1]<=arr[i+1]<arr[i] and arr[i+2]>arr[i+1]:
            temp.append(i+1)
            count+=2
        if arr[i+1]<arr[i]<arr[i-1] and count==0:
            temp.append(i)
            count+=1
        if arr[i+1]>arr[i-1]>arr[i] and count==1:
            temp.append(i+1)
            count+=1
    if count>4 or len(temp)!=2:
        print('no')  
    else:
        if count==4:
            print('yes\nswap {} {}'.format(temp[0],temp[1]))
        else:
            print('yes\nreverse {} {}'.format(temp[0],temp[1]))
if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    almostSorted(arr)
