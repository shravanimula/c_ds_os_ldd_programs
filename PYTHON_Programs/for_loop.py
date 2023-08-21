#using for loop find the number is prime or not
num=int(input("enter a number:"))
flag=0
for i in range(2,num//2):
    if num%i == 0:
        flag=1
        break

if flag==0:
    print(num,"is prime")
else :
    print(num,"is not a prime")
