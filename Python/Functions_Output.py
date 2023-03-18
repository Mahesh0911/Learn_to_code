# storing output of functions  -------return keyword

calc_of_days=24*60*60
unit ="Seconds"


# function
def calculate(no_of_days,msg,new_var):
    return f"{unit} in {no_of_days} days = {no_of_days*calc_of_days} {unit}\nmsg is : {msg} \nnew_var is : {new_var}"


# calling of function and storing value
result=calculate(2,"Hello",2) 
print(result)        #printing result

