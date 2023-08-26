lower_range = int(input("Enter lower bound : "))
upper_range = int(input("Enter upper bound : "))

sum = 0
for number in range( lower_range , upper_range + 1, 1):
    counter = 1
    if number == 1 :
        continue
    
    for divider in range(2 , number ,1):
        if number % divider == 0 :
            counter = 0
            break

    if counter == 1 :
        sum = sum + number
            
   
print(sum)
