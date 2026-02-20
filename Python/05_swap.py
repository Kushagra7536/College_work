print("""
---------------------------------
|      Using temp variable      |
---------------------------------
""")
x=int(input("Enter a number: "))
y=int(input("Enter another number: "))
print(f"before swap x was :{x} & y was:{y}")
temp=x 
x=y
y=temp
print(f"after swap x was :{x} & y was:{y}")

print()

print("""
---------------------------------
|       Mathematically          |
---------------------------------
""")
x=int(input("Enter a number: "))
y=int(input("Enter another number: "))
print(f"before swap x was :{x} & y was:{y}")
x=x+y
y=x-y
x=x-y
print(f"after swap x was :{x} & y was:{y}")

print()

print("""
---------------------------------
|    Savvy Method x,y=y,x       |
---------------------------------
""")
x=int(input("Enter a number: "))
y=int(input("Enter another number: "))
print(f"before swap x was :{x} & y was:{y}")
x,y=y,x
print(f"after swap x was :{x} & y was:{y}")