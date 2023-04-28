def prime_range(min,max):
    for i in range(min,max+1):
        for j in range(2,(i//2)+1):
            if i%j ==0:
                break
        else:
            print(i)

min=int(input("enter the minimum number:"))
max=int(input("enter the maximum number:"))
prime_range(min,max)
