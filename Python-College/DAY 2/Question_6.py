

user_input = input("Enter a number: ")

input_number = int(user_input)
num_str = str(input_number)
length = len(num_str)

for i in range(length):
    print(num_str[i:], end="")
    if i < length - 1:
        print(",", end="")

print()


