'add method'
a={1,2,3,4}
print("the set is:")
print(a)
a.add(5)
print("after adding the set is:")
print(a)

'copy method'
b=a.copy()
print('after copying the set is:')
print(b)

'clear method'
a.clear()
print('after clear the set is:')
print(a)

'difference of set is'
a1={1,2,3}
c=b.difference(a1)
print('the difference of set is:')
print(c)

'discard method'
b.discard(5)
print(b)

'intersection'
a2={1,2,3,6,5,7}
b2={3,7,6,5,9,8}
c2=a2.intersection(b2)
print("the intersection f a2 and b2 is:")
print(c2)


'issubset'
d2=c2.issubset(b2)
print(d2)

'issuperset'
e=c2.issuperset(b2)
print(e)

'pop'
print("before pop funtion:",a2)
f=a2.pop()
print('after pop removed ele:',f)
print("after pop functtion a is:",a2)

