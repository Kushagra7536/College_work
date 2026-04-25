

# person = dict(name="jamal",age=2000, name2="hemang daanav",age2=20000000)


# for i in person:
#     print(f"{i} : {person[i]}")


#! Strings

#? capitalize() → uppercases only the very first letter of the entire string, and lowercases everything else.
#? title() → uppercases the first letter of every word
# s="jamal uddin Khan"
# print(s.title())
# print(s.capitalize())


# s="  a   "
# print(s.isspace())
# print(s.lstrip(),"jfbdfhi")
# print(s.rstrip(),"jfbdfhi")

# s="stranger things"
# t=s.split(" ")
# print(t)

# s="jamal"
# s=s.replace("l","c") # returns a new string
# print(s)
# print(s.count('a'))

# s2="1234"
# s3=s.join(s2) # s acts as a separator for s2
# print(s3)

# s="kushagraagraagra"
# print(s.index("agra")) # returns the start index of first occurence of given substring
# print(s.rindex("agra"))  # returns the start index last occurence of given substring

# s="   yes"
# print(s.lstrip().startswith("ye"))

# print(ord('t'))
# print(chr(116))

# s="COMPUTER"
# print(s[-2:-6:-1])


#? LISTS

#* LIST COMPARISON

# First elements are equal — move to next
# [1, 5, 3] > [1, 2, 3]
# Step 1: 1 vs 1 → equal, move on
# Step 2: 5 vs 2 → 5 > 2 → True ✅
# print([1, 5, 3] > [1, 2, 3])   # → True


# All elements equal — check length
# [1, 2, 3] > [1, 2, 3]
# Step 1: 1 vs 1 → equal
# Step 2: 2 vs 2 → equal
# Step 3: 3 vs 3 → equal
# No winner → lists are equal → False
# print([1, 2, 3] > [1, 2, 3])   # → False


# Shorter list wins if all its elements match
# [1, 2] > [1, 2, 3]
# Step 1: 1 vs 1 → equal
# Step 2: 2 vs 2 → equal
# Step 3: left list exhausted → left is smaller → False
# print([1, 2] > [1, 2, 3])      # → False


# Longer list wins if all previous elements match
# [1, 2, 3] > [1, 2]
# Step 1: 1 vs 1 → equal
# Step 2: 2 vs 2 → equal
# Step 3: right list exhausted → left is larger → True
# print([1, 2, 3] > [1, 2])      # → True


## The Rules Summary
'''
| Situation | Result |
|---|---|
| First differing element is larger | `True` |
| First differing element is smaller | `False` |
| All elements equal, same length | `False` (they're equal) |
| All elements equal, left is longer | `True` |
| All elements equal, left is shorter | `False` |

'''

## Key Takeaway
''' 
Python never compares the full list at once.
It walks through element by element and stops
as soon as it finds a difference.
Length only matters when all compared elements are equal.

'''

# l=[1,2,3,4,5,6,7,8,9]
# for i in range(len(l)):
#     print(l[i],end=" ")
# print()

# l=[1,2,3]*5
# for i in range (len(l)):
#     print(l[i],end=" ")
# print()

# l=[1,2,3]
# l[1:1]=[4,5,6]
# print(l)

# l=[1,2,3]
# l1=[]
# l1.append(l)
# print(l)
# print(l1)

l=[1,2,3]
l.insert(-4,7)
print(l)

T=(10,20,30,40)
a,b,c,d = T
a-=1 
T=(a,b,c,d)
print(T)

'''
()
**
+x -x ~x
* / // %
+ -
<< >>
^
& 
|
= != > >= < <= is is not in not in 
not
and
or
'''


l=[12,3,4]
print(13 in l)





