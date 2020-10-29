'''
Sliding Window Maximum (Maximum of all subarrays of size k)
Given an array and an integer K, find the maximum for each and every contiguous subarray of size k.

Examples : 

Input: arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6}, K = 3 

Output: 3 3 4 5 5 5 6

Explanation: 

Maximum of 1, 2, 3 is 3
Maximum of 2, 3, 1 is 3
Maximum of 3, 1, 4 is 4
Maximum of 1, 4, 5 is 5
Maximum of 4, 5, 2 is 5 
Maximum of 5, 2, 3 is 5
Maximum of 2, 3, 6 is 6

Input: arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13}, K = 4 

Output: 10 10 10 15 15 90 90

Explanation:
Maximum of first 4 elements is 10, similarly for next 4 elements (i.e from index 1 to 4) is 10, So the sequence generated is 10 10 10 15 15 90 90
'''

n=int(input())
arr=[]
t=input().split()
for i in t:
    arr.append(int(i))
k=int(input())
from collections import deque 
def printMax(arr, n, k): 
    Qi = deque() 
    for i in range(k): 
        print(Qi)
        while Qi and arr[i] >= arr[Qi[-1]] : 
            Qi.pop() 
        Qi.append(i);
    print(Qi)
    for i in range(k, n):
        print(str(arr[Qi[0]]) + " ", end = "") 
        while Qi and Qi[0] <= i-k:
            Qi.popleft()
        while Qi and arr[i] >= arr[Qi[-1]] : 
            Qi.pop() 
        Qi.append(i) 
    print(str(arr[Qi[0]])) 
printMax(arr, len(arr), k)
