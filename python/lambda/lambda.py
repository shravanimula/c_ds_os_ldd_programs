res=lambda a,b,c:a if a>b and a>c else b if b>c else c
print(res(10,20,19))

result=lambda m,n,o:m if m>n and m>o else n if n>o else o
a1=int(input("enter the a1 number:"))
b1=int(input("enter the b1 number:"))
c1=int(input("enter the c1 number:"))
print(result(a1,b1,c1))
