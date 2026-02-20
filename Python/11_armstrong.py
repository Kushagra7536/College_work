print("""
---------------------------------
|    Armstrong Number Checker   |
---------------------------------
""")

import math
n=int(input("Enter a freakin number : "))
digits=0
temp=n
while(temp>0):
    digit=temp%10
    digits+=1
    temp//=10

temp=n
sum=0
while(temp>0):
    digit=temp%10
    sum+=math.pow(digit,digits)
    temp//=10

if(sum==n): print("YES")
else : print("NO")