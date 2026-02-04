a = ["abc", "ghi", "uti", "ebcd", "zxbc"]
b = list(filter(lambda e: e[0] in ['a', 'e', 'i', 'o','u'], a))
c = list(filter(lambda e: e[0] not in ['a', 'e', 'i', 'o','u'], a))
print(b)
print(c)