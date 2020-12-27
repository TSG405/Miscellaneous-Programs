# USING LIST CONDITIONING...


a,b,c=405,66,98
condition = [a > 30, b < 70, c >= 0]

# AND-operator Conditioning
if all(condition):
    print("ALL CONDITIONS ARE HEREBY SATISFIED!!")

# OR-operator Conditioning
if any(condition):
    print("NOT ALL CONDITIONS ARE SATISFIED (Maybe 1 or 2)!!")
    
    
    
~ @TSG405
