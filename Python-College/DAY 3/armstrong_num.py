number = int(input("Enter number to check it is Armstrong number or not : "))

original_num = number 
sum = 0
while number > 0 :
    if number == 0 :
        break
    digit = number % 10 
    sum = sum + digit*digit*digit
    number = number // 10

if sum == original_num and sum != 0 :
    print ("It is a armstrong number")
else : 
    print("Number is Not Armstrong")


