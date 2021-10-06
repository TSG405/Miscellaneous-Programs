'''
This Question is from TCS IRA, Conducted on --> 5/10/2021 (OOPS based)
Programming Language: Py-3.9
'''


class Book:
    def __init__(self,bookid,name,auth,book_type,price):
        self.bookid = bookid
        self.name = name
        self.auth = auth
        self.book_type = book_type
        self.price = price
    
    def discount(self,p):
        self.price = int(self.price - self.price*(p/100))



class BookStore:
    def __init__(self,booklist,dic):
        self.booklist = booklist
        self.dic = dic 
    
    def m1(self,t):
        result = []
        for b in self.booklist:
            if t == b.book_type:
                if b.auth in self.dic.keys():
                    if self.dic[b.auth] > 4:
                        result.append(b)
        if len(result) == 0:
            return None 
        return result
        
    def m2(self,pr):
        result_1 = {}
        for b in self.booklist:
            if b.price < pr:
                if b.auth in result_1.keys():
                    result_1[b.auth] = result_1[b.auth] + 1
                else:
                    result_1[b.auth] = 1
        if len(result_1) == 0:
            return None
        return result_1 


      
# MAIN DRIVER CODE =============================================================================
n = int(input())
booklist,d = [],{}


for _ in range(n):
    a1,a2,a3,a4,a5 = int(input()),input(),input(),input(),int(input())
    booklist.append(Book(a1,a2,a3,a4,a5))
    

for _ in range(3):
    k = input()
    d[k] = float(input())


t = input()
pr = int(input())

for b in booklist:
    if b.book_type == "Fiction": b.discount(20)
    else: b.discount(10)


obj = BookStore(booklist,d)


aaa1 = obj.m1(t)
if aaa1 == None: print("Book Not Found.")
else:
    for a in aaa1:
        print(a.price)
        print(a.name)



aaa2 = obj.m2(pr)
if aaa2 == None: print("Book is Unavailable.")
else:
    for k,v in aaa2.items():
        print(k,v)
        
        
'''
TEST CASE (1):

I/P --------->>
5
101
Unscripted
MJ deMarco
Finance
899
102
Atomic Habits
James Clear
Self Development
1300
103
Harry Potter
JK Rowling
Fiction
950
104
Wings of Fire
APJ Abdul Kalam
Autobiography
900
105
Millionaire Fastlane
MJ deMarco
Finance
800
APJ Abdul Kalam
4
Amish
4.2
JK Rowling
4.5
Fiction
1000


O/P --------->>
760
Harry Potter
MJ deMarco 2
JK Rowling 1
APJ Abdul Kalam 1







TEST CASE (2):

I/P --------->>
5
101
Unscripted
MJ deMarco
Finance
899
102
Atomic Habits
James Clear
Self Development
1300
103
Harry Potter
JK Rowling
Fiction
950
104
Wings of Fire
APJ Abdul Kalam
Autobiography
900
105
Millionaire Fastlane
MJ deMarco
Finance
800
APJ Abdul Kalam
4
Amish
4.2
JK Rowling
4.5
Finance
600


O/P --------->>
Book Not Found.
Book is Unavailable.
'''


# CODED BY TSG405,2021
