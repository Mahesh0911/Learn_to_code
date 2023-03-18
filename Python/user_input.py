# user input ---->'input' keyword -------->''raw_input'' keyword

calc_of_days=24
unit ="hours"


# function
def calculate(no_of_days):
    return f"{unit} in {no_of_days} days ={calc_of_days*no_of_days} {unit}"


# calling of function and storing value
# result=calculate(2,"Hello",2) 
# print(result)        #printing result


# user-input function ---> takes in the string type
user_input=input("Enter the Number of days :")

#casting /changing data type     -->for type casting value should be convertible
user_input_int=int(user_input)  

result=calculate(user_input_int)
print(result)

