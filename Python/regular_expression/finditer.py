import re
match=re.finditer("[abc]","a7Sb@k9#Az")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())

match=re.finditer("[^abc]","a7Sb@k9#Az")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())
    
match=re.finditer("[a-z]","a7Sb@k9#Az")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())

match=re.finditer("[A-Z]","a7Sb@k9#Az")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())

match=re.finditer("[0-9]","a7Sb@k9#Az")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())


match=re.finditer("[a-zA-Z]","a7Sb@k9#Az")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())
    
match=re.finditer("[a-zA-Z0-9]","a7Sb@k9#Az")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())


match=re.finditer("[^a-zA-Z0-9]","a7Sb@k9#Az")
for m in match:
    print(m.start(),"...",m.end(),"...",m.group())
