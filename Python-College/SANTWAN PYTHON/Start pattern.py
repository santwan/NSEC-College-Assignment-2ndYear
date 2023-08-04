for i in range( 6 ,  1 , -1 ) :
    for s in range(0 , 6-i ) :
        print("  " , end="")
    for j in range( i , 2* i-1 ):
        print("* " , end ="")
    for j in range(1 , i-1) :
        print("* " , end="")
    print() 
