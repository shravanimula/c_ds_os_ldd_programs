number=int(input("enter a number:"))
rev=0
while number!=0:
    rev=rev*10 + number%10
    number=number//10
print("after reverse the number:",rev)
