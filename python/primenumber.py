number=int(input("enter a number:"))
flag=0
for i in range(2,(number//2)+1):
    if(number%i)==0:
        flag=1
        break
    else:
        flag=0
if flag==1:
    print(number,"is not a prime number")
else:
    print(number,"is a prime number")
