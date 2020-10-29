i=list(input())
ac=0
bc=0
temp=0
latest=[0]
for j in range(len(i)):
    if (i[j]=="A" or i[j]=="B"):
        latest.append(i[j])
    if i[j] == "A":
        if (j-1) >= 0:
            if (i[j-1] == "-" and (latest[-2] == "A" or latest[-2] == 0)):
                ac+=temp+1    
            else:
                ac+=1
        else:
            ac+=1
        temp=0
    elif i[j] == "B":
        if  j-1 >=0:
            if i[j-1] == "-" and latest[-2] == "B":
                bc+=temp+1
            else:
                bc+=1
        else:
            bc+=1
        temp=0
    else:
        temp+=1
if((i[-1]=="-") and (latest[-1]=="B")):
    bc+=temp
if ac>bc:
    print("WINNER --> A ,by --",ac-bc,"vote(s)")
elif bc>ac:
    print("WINNER --> B , by --",bc-ac,"vote(s)")
else:
    print("TIE")
