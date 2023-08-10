
def display_pattern(number):
    num_str = str(number)
    length = len(num_str)

    for i in range(length):
        print(num_str[i:], end="")
        if i < length - 1:
            print(",", end="")

    print()

# Take input from the user
user_input = input("Enter a number: ")

try:
    input_number = int(user_input)
    display_pattern(input_number)
except ValueError:
    print("Invalid input. Please enter a valid number.")