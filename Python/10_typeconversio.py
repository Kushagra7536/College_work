# Type Conversion in Python

# --- Implicit Conversion (done automatically by Python) ---
int_num = 10
float_num = 2.5
result = int_num + float_num  # int is automatically converted to float
print(f"Implicit conversion: {int_num} + {float_num} = {result} (type: {type(result).__name__})")

# --- Explicit Conversion (done manually using built-in functions) ---

# int() - converts to integer
print("\n-- int() conversions --")
print(int(3.99))        # float to int → 3 (truncates, doesn't round)
print(int("42"))        # string to int → 42
print(int(True))        # bool to int → 1
print(int(False))       # bool to int → 0

# float() - converts to float
print("\n-- float() conversions --")
print(float(7))         # int to float → 7.0
print(float("3.14"))    # string to float → 3.14
print(float(True))      # bool to float → 1.0

# str() - converts to string
print("\n-- str() conversions --")
print(str(100))         # int to string → "100"
print(str(3.14))        # float to string → "3.14"
print(str(True))        # bool to string → "True"

# bool() - converts to boolean
print("\n-- bool() conversions --")
print(bool(0))          # zero → False
print(bool(42))         # non-zero → True
print(bool(""))         # empty string → False
print(bool("hello"))    # non-empty string → True
print(bool(None))       # None → False

# list(), tuple(), set() - collection conversions
print("\n-- Collection conversions --")
my_list = [1, 2, 2, 3, 3]
print(f"List:  {my_list}")
print(f"Tuple: {tuple(my_list)}")
print(f"Set:   {set(my_list)}")   # removes duplicates

# --- Type Errors (what happens when conversion fails) ---
print("\n-- Handling invalid conversions --")
try:
    int("hello")  # can't convert "hello" to int
except ValueError as e:
    print(f"ValueError: {e}")