'''
1
4 9
16 25 36
49 64 81 100
121 144 169 196 225
'''

n=int(input("enter the number of rows:"))
num=1
for i in range(1,n+1,1):
    for j in range(1,i+1,1):
        print(num*num,end=' ')
        num=num+1
    print(' ')
