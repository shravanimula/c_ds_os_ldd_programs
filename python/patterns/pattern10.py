'''
1
* *
2 2 2
* * * *
3 3 3 3 3 
'''

n=int(input("enter the number of rows:"))
for i in range(1,n+1,1):
    for j in range(1,i+1,1):
        if (i%2 == 1):
            print(i,end=' ')
        else:
            print("*",end=' ')
    print(' ')
