import re
count=0
pattern=re.compile("ab")
match=pattern.finditer("abaababa")
for m in match:
    count+=1
    print(m.start(),"...",m.end(),"...",m.group())
    print("The number of occurrences: ",count)
#output#
#0 ... 2 ... ab
#The number of occurrences:  1
#3 ... 5 ... ab
#The number of occurrences:  2
#5 ... 7 ... ab
#The number of occurrences:  3
