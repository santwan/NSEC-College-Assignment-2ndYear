number_1 = int(input("Enter number to find LCM : "))
number_2 = int(input("Enter number to find LCM : "))
min_num = min(number_1 , number_2)
i = min_num

if min_num == 0 :
        print("LCM is ", min_num)
        

while i >= 1 :

    if number_1 % i == 0 and number_2 % i == 0:
        print("LCM is ", i)
        break
    i -= 1
    