# import math as ms
# n = int(input("Enter Number = "));

def prime (n: int) -> bool:
    if(n <= 1): return False
    if(n == 2): return True
    if(n <= 3): return True

    if(n % 2 == 0 or n % 3 == 0): return False

    i = 5
    while (i * i <= n):
        if(n % i == 0 or n % (i + 2) == 0): return False
        i = i + 6
    return True

j = 0
while (j <= 1000):
    if(prime(j)): print("Number is Prime = ", j)
    j = j + 1