'''
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
'''
n=int(input("enter the number of rows:"))
for i in range(n,0,-1):
    for j in range(n,i-1,-1):
        print(i,end=' ')
    print(' ')
