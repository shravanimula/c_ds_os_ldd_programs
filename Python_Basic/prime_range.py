min=int(input("enter a starting number:"))
max=int(input("enter a ending number:"))
for i in range(min,max+1):
    for j in range(2,i//2):
        if(i%j ==0):
            break
    else:
            print(i)
