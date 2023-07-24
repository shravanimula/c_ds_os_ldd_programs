'''
0
1 -1
2 -2 2
3 -3 3 -3
4 -4 4 -4 4
'''

n=int(input("enter the number of rows:"))
for i in range(0,n,1):
    for j in range(0,i+1,1):
        if(j%2==0):
            print(i,end=' ')
        else:
            print(-i,end=' ')
    print(' ')
