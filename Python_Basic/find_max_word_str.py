s=input().split()
print(s)
max_word=s[0]
for word in s:
    if len(word) > len(max_word):
        max_word=word
print(max_word)
