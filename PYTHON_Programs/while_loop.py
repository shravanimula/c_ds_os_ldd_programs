#using while loop reverse the number
num=int(input("enter a number:"))
print(num)
rev=0
while(num):
    rev=rev*10+num%10
    num=num//10

print("reverse the number:",rev)
