# Defining an array
arr = [1, 2, 3, 4]
print(arr)  # Output: [1, 2, 3, 4]

# Accessing an array item
print(f"Item at index 0: {arr[0]}")  # Output: Item at index 0: 1

# Modifying an array item
arr[0] = 2
print(f"Modified item at index 0: {arr}")  # Output: Modified item at index 0: [2, 2, 3, 4]

# Adding an element to the end of an array
arr.append(5)
print(f"Array after appending 5: {arr}")  # Output: Array after appending 5: [2, 2, 3, 4, 5]

# Inserting an element at a specific index
arr.insert(2, 10)  # Inserts 10 at index 2
print(f"Array after inserting 10 at index 2: {arr}")  # Output: [2, 2, 10, 3, 4, 5]

# Removing an element by index
arr.pop(1)  # Removes the element at index 1
print(f"Array after removing item at index 1: {arr}")  # Output: [2, 10, 3, 4, 5]

# Removing an element by value
arr.remove(10)  # Removes the first occurrence of 10
print(f"Array after removing 10: {arr}")  # Output: [2, 3, 4, 5]

# Checking the length of the array
print(f"Length of array: {len(arr)}")  # Output: Length of array: 4

# Slicing an array
print(f"Sliced array (index 1 to 3): {arr[1:3]}")  # Output: [3, 4]
