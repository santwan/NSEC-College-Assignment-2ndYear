# Swapping using a third variable
    

a = int(input("Enter First Number : "))
b = int(input("Enter Second number : "))
temp = a
a = b
b = temp
print("After swapping (using third variable):")
print("a =", a)
print("b =", b)