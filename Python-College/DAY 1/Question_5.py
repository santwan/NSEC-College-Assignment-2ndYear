


x = int(input("Enter First Number : "))
y = int(input("Enter Second number : "))
z = int(input("Enter Third Number : "))

# Rotate the values
temp = x  # Store the value of x in a temporary variable
x = y     # Assign the value of y to x
y = z     # Assign the value of z to y
z = temp  # Assign the original value of x (stored in temp) to z
# Print the rotated values
print("x:", x)
print("y:", y)
print("z:", z)