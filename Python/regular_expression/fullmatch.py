import re
p=input("Enter pattern to check:")
m=re.fullmatch(p,"hyderabad")
if m!= None:
    print("Match is available at the beginning of the String")
    print("Start Index:",m.start(), "and End Index:",m.end())

else:
    print("Match is not available at the beginning of the String")
    print(m)
