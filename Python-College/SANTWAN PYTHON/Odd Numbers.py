n1 = int(input("Enter the Starting : "))
n2 = int(input("Enter The Last Range : "))
         
start , end = n1, n2
for num in range(start , end + 1 ) :
    if num %2 !=0 :
        print( num , end=" ")
        
