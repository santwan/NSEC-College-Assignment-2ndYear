rows = int(input("Enter The Row No : "))

for i in range(1, rows + 1):
    print(" " * (i - 1) * 2, end="")
    print("* " * (rows - i + 1))