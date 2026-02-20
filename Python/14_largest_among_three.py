print("""
---------------------------------
|       Search the Largest      |
---------------------------------
""") 

x,y,z = map(int, input("Enter 3 numbers : ").split())
if(x>y and x>z): print(f"{x} is the largest")
elif(y>x and y>z): print(f"{y} is the largest")
else: print(f"{z} is the largest")