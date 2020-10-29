'''
Create a Pattern as the following :-------
n=5 (Given)

    *
   * *
  * * *
 * * * *
* * * * *


Solved, Using String Manupulation Techniques!
'''

n=5                         #You can use 'n=int(input())', for more generalized input!

for tsg in range(1,n+1):
  print(" "*(n-tsg)+"* "*tsg)
