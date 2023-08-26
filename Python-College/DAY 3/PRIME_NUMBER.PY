#  Write a program to check whether a given number is a prime number or not.

number = int(input("Enter number to check it is prime or not : "))
half_range = int(number/2)
for divider in range(2 , half_range):
    if number % divider == 0 :
        print("Number is not prime")
        break
    else:
        print("Number is Prime")
        break
    
