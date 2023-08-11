print("the fabonoic series:")
num=10
a,b=0,1
c=0

print(c)
for i in range(num-1):
    a=b
    b=c
    c=a+b
    print(c)

