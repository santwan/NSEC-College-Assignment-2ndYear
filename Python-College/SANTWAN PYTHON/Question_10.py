#Writing a program to calculate simpple interest

n = float(input("Enter your principal amount"))

if n < 200000 :
    Simple_interest = (n*0.01)
elif 200000 <= n < 1000000 :
    Simple_interest = ( n*0.12 )
else:
    Simple_interest = (n*0.15)

print("Your Simple interest is " , Simple_interest )
    


    
