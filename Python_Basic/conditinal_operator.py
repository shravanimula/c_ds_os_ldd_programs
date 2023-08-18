a=int(input("enter the a value:"))
b=int(input("enter the b value:"))
c=int(input("enter the c value:"))
if(a > b) and (a > c):
    print(a ,"is greater than ",b,"and",c)
elif(b > a) and (b > c):
    print(b,"is greater than ",a,"and",c)
else:
    print(c,"is greater than",a,"and",b)
