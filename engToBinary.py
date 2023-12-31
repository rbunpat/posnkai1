def text_to_binary(text):
    binary_result = ""
    for char in text:
        ascii_value = ord(char)
        binary_value = bin(ascii_value)[2:]  # Convert to binary and remove the '0b' prefix
        binary_result += binary_value + ' '

    return binary_result.strip()  # Remove trailing space

# Input a string and convert it to binary
input_text = input("Enter a string: ")
binary_output = text_to_binary(input_text)

print(f"Binary representation: {binary_output}")
