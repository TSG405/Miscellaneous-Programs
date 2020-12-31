'''
Give a string input of parentheses (brackets --- first order, second order or third order) and check if the parentheses are closed successfully.
'''

# List-indexing with bracket samples..
open_list = ["[","{","("] 
close_list = ["]","}",")"]

def check(s):
    global open_list
    global close_list
    stack = [] 
    
    for i in (s): 
        if i in (open_list): 
            stack.append(i) 
        elif i in (close_list): 
            pos = close_list.index(i) 
            if ((len(stack) > 0) and (stack[len(stack)-1]) == open_list[pos]): 
                stack.pop() 
            else: 
                return "NOT BALANCED!"          
    if (len(stack) == 0): 
        return "BALANCED!" 
    else:
        return "NOT BALANCED!"
        
string=input()
print(check(string))



@ TSG405, 2020
