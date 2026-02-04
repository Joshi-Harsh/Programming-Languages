'''
WAP that takes integr as input and give its individual spellings in output

Code:

a = int(input("Give any integer:  "))
digits = []
Spell = {0: 'zero', 1: 'One', 2: 'Two', 3: 'Three', 4: 'Four', 5: 'Five', 6: 'Six',
         7: 'Seven', 8: 'Eight', 9: 'Nine'}
while (a != 0):
    n = a % 10
    digits.append(n)
    a = a // 10
digits = digits[-1::-1]
for e in digits:
    print(Spell[e], end=" ")

'''



'''Given a list 'a' that contains (10,3,0,8,-5,14,15).
write a code that copies even and odd numbers of a in seperate list 'b' and 'c' '''

'''
Code:
a = [10,3,0,8,-5,14,15]
b = []
c = []

for i in a:
    if (i > 0):
        if (i%2 == 0):
            b.append(i)
        else:
             c.append(i)
    
print("Original List:", a)
print("Even Number List:", b)
print("Odd Number List:", c)
'''

'''Create two list 'b' and 'c' that stores the squares and cubes of all values in the list 'a' '''
'''
Code:
a =[1,2,3,4]
b = []
c = []

for i in a:
    b.append(i**2)
    c.append(i**3)

print("Original List:", a)
print("Squares List:", b)
print("Cubes List:", c)
'''
''' 

frozen set example

a = {1,2,3,4}
print(type(a))
b = frozenset (a)
print(type(b))
a.add(3)
b.add(3)
print(a)
print(b)
'''
