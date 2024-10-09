import os

# Constants
END_IDX = 16
FILENAME = './Buffers/Python/output.bin'

print("Current Working Directory:", os.getcwd())

# Create an empty bytearray of length END_IDX
int_buff = bytearray(END_IDX)

# Print the empty buffer
print("Empty Buffer:", int_buff)

# Fill the buffer with values [0 - 15]
for i in range(END_IDX):
    int_buff[i] = i  # Assign the value to the buffer

# Print the buffer with values in hexadecimal
print("Buffer with values [0 - 15]:", int_buff)

# Print in different formats as a string
# HEX
hex_string = ' '.join(f'{byte:02x}' for byte in int_buff)  # Convert to hex and format
print("HEX:", hex_string)

# BIN
bin_string = ' '.join(f'{byte:08b}' for byte in int_buff)  # Convert to binary and pad with zeros
print("BIN:", bin_string)

# Writing to a binary file
with open(FILENAME, 'wb') as f:
    f.write(int_buff)

print(f"Data written to {FILENAME}")

# Reading back from the binary file
with open(FILENAME, 'rb') as f:
    data_read = f.read()

# Print the data read from the file
print("Data read from file:", data_read)

# Optionally, convert the read data to hex and bin for verification
hex_string_read = ' '.join(f'{byte:02x}' for byte in data_read)
bin_string_read = ' '.join(f'{byte:08b}' for byte in data_read)

print("HEX (read):", hex_string_read)
print("BIN (read):", bin_string_read)