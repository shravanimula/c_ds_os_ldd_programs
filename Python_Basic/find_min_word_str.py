str=input().split()
print(str)
min_word=str[0]
for word in str:
    if len(min_word) > len(word):
        min_word=word
print(min_word)
