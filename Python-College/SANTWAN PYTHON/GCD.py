n1 = int(input("Enter a number : "))
n2= int(input("Enter a number : "))
rem = n1 % n2
while rem!=0 :
    n1 = n2
    n2 = rem
    rem = n1 % n2
print ( "GCD of Given Number is %d" % (n2))
