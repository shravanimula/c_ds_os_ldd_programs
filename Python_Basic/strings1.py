st="hello thundersoft india hyd"
word=st.capitalize()
print(word)

#convert some specific position to upper
length=0
for i in word:
    length=length+1

print("length of the string is:",length)
string=""
for i in range(length):
    if i%2==0:
        string+=word[i].upper()

    else:
        string+=word[i].lower()
print(string)

#convert upper to lower and lower to upper
str1=""
for i in range(length):
    str1=str1+string[i].swapcase()

print("converting the upper to lower and lower to upper:",str1)


str2=str1.split()
print(str2)
max_length=str2[0]
for i in str2:
    if len(max_length) < len(i):
        max_length=i

print("maximum length of the word is:",max_length)




#count the substring
Str="ts in hyd and in bnglr in chennai"
substr="in"
count=0
Str1=Str.split()
for i in Str1:
    if i == substr:
        count=count+1
print("count the substr:",count)

