print("Enter three numbers")
x = int(input("Enter First Number"))
y = int(input("Enter Second Number"))
z = int(input("Enter Third Number"))

if x>y:
    if y > z :
        print(x , y , z , sep='>')
    else :
        print(x , z , y , sep = '>')
else:
    if y > z :
        if z > x :
            print(y , z , x , sep = '>')
        else:
            print(y , x , z , sep='>')
    else :
        print(z , y , x, sep='>')
