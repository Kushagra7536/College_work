print("""
---------------------------------
|         Prime Checker         |
---------------------------------
""")

# Prime Numbers are of the form 6k±1  for primes > 3
def prime (n: int) -> bool:
    if(n <= 1): return False
    if(n == 2): return True
    if(n <= 3): return True

    if(n % 2 == 0 or n % 3 == 0): return False

    i = 5
    while (i * i <= n):
        if((n % i == 0) or (n % (i + 2) == 0)): return False
        i = i + 6

    return True

n = int(input("Enter a Number : "))

if(prime(n)): print(f"{n} is a Prime Number")

else: print(f"{n} is not a Prime Number")