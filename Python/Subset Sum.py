'''
Problem: Find -- if a sum of "k" is possible using subsets of a given set of numbers. [Solve through DP (OPTIMAL)]

INPUT:    First line will contain a set of numbers seperated by a comma ","
          Second line contains the sum "k".

OUTPUT:   Print "1" --- if the subset is possible with the associated sum of "k", else --- print "-1"
'''



def isSum(set, n, sum): 

    # Initiation
    subset =([[False for tsg in range(sum + 1)] for tsg in range(n + 1)]) 
      
    for ii in range(n + 1): 
        subset[ii][0] = True
          
    for ij in range(1, sum + 1): 
        subset[0][ij]= False
      
      
    # Subset Table (BOTTOM-UP APPROACH) 
    for i in range(1, n + 1): 
        for j in range(1, sum + 1): 
                
            if j<set[i-1]: 
                subset[i][j] = subset[i-1][j] 
                
            if j>= set[i-1]: 
                subset[i][j] = (subset[i-1][j] or subset[i - 1][j-set[i-1]]) 
     
     
    # Print table (OPTIONAL -- FOR DEBUGGING)
    '''
    for i in range(n + 1): 
        for j in range(sum + 1): 
            print (subset[i][j], end =" ") 
            print() 
    '''
        
    return subset[n][sum] 
          

# Driver program
set = list(map(int,input().strip().split(","))) 
sum = int(input()
n = len(set) 
if (isSum(set, n, sum) == True): 
    print(1) 
else: 
    print(-1)
    
    
    
@ CODED BY TSG405, 2021 
