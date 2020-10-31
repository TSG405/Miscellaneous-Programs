import calendar
try:
    y= int(input("Enter the year (RANGE -- 1 to 9999"))
    if 1>y or y>9999:
        print("Please choose another year")
    else:
        for i in range (12):
            print(calendar.month(y,i+1))
except:
    print("Please choose a year of the given range of Calendar!")
