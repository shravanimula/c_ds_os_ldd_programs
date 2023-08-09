#append

a=[1,2,3,4,5]
a.append(6)

print(a)

#extend

b=[11,22,33,44]
a.extend(b)
print(a)

#insert

b.insert(2,20)
print(b)

#remove
c=[1,2,3,4,5,6,7]
c.remove(5)
print(c)

#pop
print(c.pop())


#clear
c.clear()
print(c)



#index
a1=[1,2,3,4,5,6]
print('finding index of number:')
print(a1.index(5))


#count
b1=[1,2,3,4,55,6,3,4,3]
print('count the number of repats:')
print(b1.count(3))

#sort

a2=[5,29,25,8,11,2,57]
print("sort the list:")
a2.sort()
print(a2)

#reverse
b3=[1,2,3,4,5,6,7]
print("reverse the list:")
b3.reverse()
print(b3)


#max
a=[22,67,29,31,4,58,99]
print(max(a))

#min
print(min(a))
#sum
print(sum(a))
