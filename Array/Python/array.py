import array

# Type Codes:
# 'i' : Signed integer (4 bytes)
# 'f' : Floating-point number (4 bytes)
# 'd' : Double-precision floating-point number (8 bytes)
# 'u' : Unicode character
# 'b' : Signed integer (1 byte)
# 'B' : Unsigned integer (1 byte)
# 'h' : Signed integer (2 bytes)
# 'H' : Unsigned integer (2 bytes)

# Creating an array of integers
int_array = array.array('i', [1, 2, 3, 4])

# Displaying the array
print(int_array)  # Output: array('i', [1, 2, 3, 4])

# Accessing elements
print(int_array[0])  # Output: 1

# Modifying elements
int_array[0] = 10
print(int_array)  # Output: array('i', [10, 2, 3, 4])

# Adding elements to the end
int_array.append(5)
print(int_array)  # Output: array('i', [10, 2, 3, 4, 5])

# Inserting elements at a specific index
int_array.insert(1, 15)  # Inserts 15 at index 1
print(int_array)  # Output: array('i', [10, 15, 2, 3, 4, 5])

# Removing elements
int_array.pop(2)  # Removes element at index 2
print(int_array)  # Output: array('i', [10, 15, 3, 4, 5])

# Checking length
print(len(int_array))  # Output: 5
