import math
x=eval(input("Enter side 1: "))
y=eval(input("Enter side 2: "))
z=eval(input("Enter side 3: "))

s=(x+y+z)/2

print(f"Area of triangle with sides {x},{y},{z} : {math.sqrt(s*(s-x)*(s-y)*(s-z))}")