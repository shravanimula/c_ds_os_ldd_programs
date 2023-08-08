res=lambda a,b,c:a if a>b and a>c else b if b>c else c
print(res(11,22,10))


result=lambda x,y,z:x if x>y and x>z else y if y>z else z

a=int(input('enter a number:'))
b=int(input('enter b number:'))
c=int(input('enter c number:'))
print(result(a,b,c))

