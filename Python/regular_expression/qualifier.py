''''we can use quantifiers to specify the number of occurrences to 
match.
a --- Exactly one 'a' 
a+ --- At least one 'a' 
a* --- Any number of a s including zero number
a? --- At most one 'a' i.e. either zero number or one number 
a{m} --- Exactly m number of a's 
a{m, n} --- Minimum m number of a's and Maximum n number of a's '''

import re
match=re.finditer("a","abaabaaab")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())

match=re.finditer("a+","abaabaaab")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())

match=re.finditer("a*","abaabaaab")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())

match=re.finditer("a?","abaabaaab")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())
    
match=re.finditer("a{2}","abaabaaab")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())

match=re.finditer("a{2,3}","abaabaaab")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())
