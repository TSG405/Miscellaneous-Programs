'''
This is the shortest way of printing Fibonacci series.
METHOD: TUPLE UNPACKING
@TSG405
'''



n=int(input())
a,b=0,1
for i in range(n):
    print(a)
    a,b=b,(a+b)
