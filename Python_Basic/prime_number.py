number=int(input("enter a number:"))
flag=0
for i in range(2,number//2):
    if number%i==0:
        flag=1
        break
if(flag==1):
    print(number,"is not a prime number")
else:
    print(number,"is prime number")
