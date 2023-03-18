# conditional statements

calc_of_days=24
unit ="hours"

# function
def calculate(no_of_days):
    # conditional statement
    if no_of_days>0:
        return f"{unit} in {no_of_days} days ={calc_of_days*no_of_days} {unit}"
    elif no_of_days==0:
        return "Zero Days: Invalid"
    else:
        return "Not Valid Number of days"


# user-input function ---> takes in the string type
user_input=input("Enter the Number of days :")


#casting /changing data type     -->for type casting value should be convertible
if user_input.isdigit():            #built in function '.isdigit()'
    user_input_int=int(user_input)  
    result=calculate(user_input_int)
    print(result)
else:
    print("You should Enter a Number.")
