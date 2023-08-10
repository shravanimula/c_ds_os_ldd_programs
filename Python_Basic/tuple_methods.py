'count function'
a=(1,2,3,4,3,5,3,2)
print(a.count(3))

'index function'
print(a.index(5))

'all function'
print(all(a))

'enumerate'
print(list(enumerate(a)))
print(list(enumerate(a,22)))

"max"

print("max element:",max(a))

'min'
print("min element:",min(a))

"sum"
print('sum elements:',sum(a))

elements=input("enter the input and comma seprated numbers:")
list=elements.split(",")

tuple = tuple(list)
print(tuple)
