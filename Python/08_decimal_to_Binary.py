print("""
---------------------------------
|    Doing Manually ->          |
---------------------------------
""")

n = int(input("Enter a number in decimal : "))

temp = n
binary = ""

while(temp > 0):
    binary = str(temp%2) + binary
    temp = temp // 2

print(binary)

temp = n
octal = ""

while(temp > 0):
    octal = str(temp%8) + octal
    temp = temp // 8

print(octal)

temp = n
hexa = ""

while(temp > 0):
    rem = temp % 16

    if(rem >= 10): st = chr(ord('A') + (rem-10))
    
    hexa = st + hexa
    temp = temp // 16

print(hexa) 

print() 

print("""
---------------------------------
|    Using Built-in Methods ->  |
---------------------------------
""")

n = int(input("Enter a number in decimal : "))

print(f"{n} in binary is {bin(n)[2:]}")
print(f"{n} in octal is {oct(n)[2:]}")
print(f"{n} in hexadecimal is {hex(n)[2:]}")