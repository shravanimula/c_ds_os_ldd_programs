
a={1:'aaaa',2:'bbbb'}
print("copy the dictionary:")
b=a.copy()
print(b)

print('clear the dictionary:')
a.clear()
print(a)


'return specified key value'
c=b.get(1)
print("the value of key is:",c)
d=b.get(3)
print("the value of key is:",d)


'print the keys'
a1={1:'aaaaa',2:'bbbbb',3:'ccccc',4:'ddddd'}
b2=a1.keys()
print("print the keys present on dictionary:")
print(b2)

print('printing only values')
a11=a1.values()
print(a11)

'update method'
x={1:'qqqqq',2:'wwwww',3:'aaaaa'}
y={4:'bbbbb',5:'ccccccc'}
print('update the dictinory:')
x.update(y)
print(x)

'pop item'
x.popitem()
print('pop the element the :')
print(x)
