s1 = """my name is "tom" and i am 18 years old"""
print(s1)
s2 = "abcdefg"
print(s2[0])  # a
print(s2[-1])  # g
# print(s2[10]) # IndexError: string index out of range
print(s2[2:5])  # cde
print(s2[2:])  # cdefg
print(s2[:5])  # abcde
print(s2[:])  # abcdefg
print(s2[::2])  # aceg
print(s2[::-2])  # geca

