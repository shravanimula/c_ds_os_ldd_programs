'''
e
d d
c c c
b b b b
a a a a a
'''

n=int(input("enter the number of rows:"))
ch=101
for i in range(1,n+1,1):
    for j in range(1,i+1,1):
        print(chr(ch),end=' ')
    ch=ch-1
    print(' ')
