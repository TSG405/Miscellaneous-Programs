# Maybe the easiest code to check the input as PALINDROME or not! ;)


user = input("Hey, type your query to check PALINDROME: \t")
check = user.find(user[::-1]) == 0
print(check)


~ @TSG405
