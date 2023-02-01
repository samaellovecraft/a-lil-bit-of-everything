
badchars = ['formational ']
wordlist = ['informational security']
print(wordlist)
for baddie in badchars:
    wordlist = list(map(lambda x: x.replace(baddie,''), wordlist))
print(wordlist)