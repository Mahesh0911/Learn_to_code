# Global variables
num=9

# function
def squareOfNum(a):
    # making local variable to global using 'global' keyword  
    # ------> function should be called outside to access the local variables as global 
    global local_number 
    local_number=12

    print(num*num)


###### Here function is not called so local number cannot be accessed
# print(local_number)          

#########
squareOfNum(num)

# local variable to global converted
print(local_number)