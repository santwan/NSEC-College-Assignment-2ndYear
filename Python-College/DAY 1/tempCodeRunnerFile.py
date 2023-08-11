# Accepting input from the user
principal = float(input("Enter the principal amount: "))
rate_of_interest = float(input("Enter the rate of interest (%): "))
duration = float(input("Enter the duration (in years): "))

# Calculating the interest amount
interest_amount = (principal * rate_of_interest * duration) / 100

# Calculating the total amount
total_amount = principal + interest_amount

# Printing the results
print(f"Interest amount: {interest_amount:.2f}")
print(f"Total amount: {total_amount:.2f}")