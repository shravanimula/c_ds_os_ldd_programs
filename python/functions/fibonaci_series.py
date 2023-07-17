def fibnacci_series(num):
    if num==0:
        return 0
    elif num == 1:
        return 1
    else:
        return (fibnacci_series(num-1) + fibnacci_series(num-2))


number=int(input("enter the number:"))
for i in range(0,number+1):
    print(fibnacci_series(i))
