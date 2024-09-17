# Primitive data types
age = 30                    # Integer
pi = 3.14                   # Float
name = "John Doe"           # String
greeting = 'Hello, World!'  # String
is_valid = True             # Boolean
is_active = False           # Boolean
empty_value = None          # NoneType

# List (dynamic array)
numbers = [1, 2, 3, 4]
numbers.append(5)  # Adding an element to the list

# Tuple (immutable collection)
coordinates = (10.0, 20.0)

# Dictionary (key-value pairs)
person = {
    "name": "John Doe",
    "age": 30
}

# Set (unordered, unique elements)
unique_numbers = {1, 2, 3, 4}
unique_numbers.add(5)  # Adding a unique element

# Function
def greet(name):
    return f"Hello, {name}!"

# Class and Object
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

john = Person("John Doe", 30)

# Printing values
print("Age:", age)                   # Output: Age: 30
print("Pi:", pi)                     # Output: Pi: 3.14
print("Name:", name)                 # Output: Name: John Doe
print("Greeting:", greeting)         # Output: Hello, World!
print("Is Valid:", is_valid)         # Output: Is Valid: True
print("Is Active:", is_active)       # Output: Is Active: False
print("Empty Value:", empty_value)   # Output: Empty Value: None

# Working with lists
print("Numbers:", numbers)           # Output: Numbers: [1, 2, 3, 4, 5]

# Working with tuples
print("Coordinates:", coordinates)   # Output: Coordinates: (10.0, 20.0)

# Working with dictionaries
print("Person:", person)             # Output: Person: {'name': 'John Doe', 'age': 30}

# Working with sets
print("Unique Numbers:", unique_numbers) # Output: Unique Numbers: {1, 2, 3, 4, 5}

# Using functions
print(greet("Alice"))                # Output: Hello, Alice!

# Using classes and objects
print(f"Person Name: {john.name}, Age: {john.age}") # Output: Person Name: John Doe, Age: 30
