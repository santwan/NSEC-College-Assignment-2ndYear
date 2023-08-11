# #Writing a program to calculate simpple interest

# n = float(input("Enter your principal amount"))

# if n < 200000 :
#     Simple_interest = (n*0.01)
# elif 200000 <= n < 1000000 :
#     Simple_interest = ( n*0.12 )
# else:
#     Simple_interest = (n*0.15)

# print("Your Simple interest is " , Simple_interest )


def calculate_simple_interest(principal_amount):
    if principal_amount < 200000:
        interest_rate = 10
    elif principal_amount >= 200000 and principal_amount <= 1000000:
        interest_rate = 12
    else:
        interest_rate = 15
    
    interest = (principal_amount * interest_rate) / 100
    return interest
 
# Taking input from the user
principal = float(input("Enter the principal amount: "))

# Calculate and display the interest
interest_amount = calculate_simple_interest(principal)
print(f"Simple Interest: {interest_amount}")


    
