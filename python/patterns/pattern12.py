'''
a
b b
c c c
d d d d
e e e e e
'''

n=int(input("enter the number of rows:"))
ch=97
for i in range(1,n+1,1):
    for j in range(1,i+1,1):
        print(chr(ch),end=' ')
        
    ch=ch+1
    print(' ')
