n=int(input("Enter a number in decimal : "))
binary=""
while(n>0):
    binary=str(n%2)+binary
    n//=2
print(binary)