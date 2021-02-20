print("--------------------------------\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n--------------------------------\n         KNow THe DAy \n--------------------------------\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n-------------------------------- ")

# LOGICAL FUNCTION
def func(D,M,Y):
    
    if M <=2 :
        NYYYY = Y - 1
        NMM = 0
    else:
        NYYYY = Y
        NMM = (4 * M + 23) // 10

    IDAY = 365 * Y + D + 31 * (M - 1) - NMM + (NYYYY // 4) - ((3 * ((NYYYY // 100) + 1) // 4))
    day =( IDAY % 7 )
    
    print("\n\n********************")
    
    if day == 0 :
        print("  IT's a SATURDAY!")
    elif day == 1 :
        print("  IT's a SUNDAY!")
    elif day == 2 :
        print("  IT's a MONDAY!")
    elif day == 3 :
        print("  IT's a TUESDAY!")
    elif day == 4 :
        print("  IT's a WEDNESDAY!")
    elif day == 5 :
        print("  IT's a THURSDAY!")
    else:
        print("  IT's a FRIDAY!")
    
    print("********************\n\n")


# DRIVER FUNCTION
def main():

    i = list(map(int,input("\n\nBOT: ENTER THE DATE IN ------>  DD MM YYYY  <------ FORMAT :\t").split(' ')))
    
    try:
        D = i[0]
        M = i[1]
        Y = i[2]
    except:
        print("BOT: FOLLOW THE INSTRUCTIONS AND ENTER THE DATE CORRECTLY!")
        main()
        
    if D<0 or D>31 or M<0 or M>12 or Y<1000 or Y>9999:
        print("BOT: WRONG INPUT!\n")
        main()
    
    func(D,M,Y)

    while(True):
        u = input("-------------------------------------------\n-------------------------------------------\nBOT: Want to try Again? TYPE yes/y or n/no :\t").split(' ')
        print("-------------------------------------------\n-------------------------------------------\n")
        
        if u[0].lower() == 'yes' or u[0].lower() == 'y':
            main()
        elif u[0].lower() == 'no' or u[0].lower() == 'n':
            print("BOT: Thank you! See you soon!\n")
            exit()
        else:
            print("BOT: WRONG INPUT!\n")
        
main()



~ @TSG405
