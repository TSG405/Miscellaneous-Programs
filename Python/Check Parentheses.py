'''
Give a string input of parentheses (brackets --- first order, second order or third order) and check if the parentheses are closed successfully.
'''

open_list = ["[","{","("] 
close_list = ["]","}",")"]
def check(myStr):
    stack = [] 
    for i in myStr: 
        if i in open_list: 
            stack.append(i) 
        elif i in close_list: 
            pos = close_list.index(i) 
            if ((len(stack) >0)and(open_list[pos]==stack[len(stack)-1])): 
                stack.pop() 
            else: 
                return "FAILURE"
                
    if len(stack) == 0: 
        return "SUCCESS" 
string=input()
print(check(string))
