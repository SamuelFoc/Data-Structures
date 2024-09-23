import sys

# Maximum integer in Python (Python's int is arbitrary-precision)
max_int = sys.maxsize  # Platform-dependent, typically 9223372036854775807 (on 64-bit systems)

# Arbitrary large integer (no limit in Python)
arbitrary_large_int = max_int ** 10  # Raising max_int to the power of 10, just for example

# Maximum float (limited by IEEE 754 floating-point standard)
max_float = sys.float_info.max  # Largest possible float value (~1.7976931348623157e+308)

# Infinitely large floating point number
infinity_float = float('inf')  # Infinity

# Large string
long_string = "A" * 1000  # String of 1000 'A' characters

# Boolean max (True is the only "max" for booleans)
max_boolean = True

# List of maximum integers
max_int_list = [max_int] * 5  # List containing the max integer repeated 5 times

# Tuple containing maximum values
max_tuple = ("MaxTuple", max_int, max_float)

# Function that logs a message (returning None, similar to void in JS/TypeScript)
def log_message():
    print("Logging the maximum values...")

# Output the values
print(f"Max integer (sys.maxsize): {max_int}")
print(f"Arbitrary large integer: {arbitrary_large_int}")
print(f"Max float (sys.float_info.max): {max_float}")
print(f"Infinity float: {infinity_float}")
print(f"Long string: {long_string[:50]}... (total length: {len(long_string)})")  # Print a portion for brevity
print(f"Max boolean: {max_boolean}")
print(f"Max int list: {max_int_list}")
print(f"Max tuple: {max_tuple}")

# Call the function
log_message()
