import re
match=re.finditer("\s","a7Sb @k 9#Az")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())

match=re.finditer("\S","a7Sb @k 9#Az")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())
    
match=re.finditer("\d","a7Sb @k 9#Az")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())

match=re.finditer("\D","a7Sb @k 9#Az")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())
    
match=re.finditer("\w","a7Sb @k 9#Az")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())

match=re.finditer("\W","a7Sb @k 9#Az")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())
    
match=re.finditer(".","a7Sb @k 9#Az")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())
