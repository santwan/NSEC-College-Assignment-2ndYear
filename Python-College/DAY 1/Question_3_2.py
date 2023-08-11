# Swapping without using a third variable

a = int(input("Enter First Number : "))
b = int(input("Enter Second number : "))

a = a + b
b = a - b
a = a - b
print("After swapping (without using third variable):")
print("a =", a)
print("b =", b)