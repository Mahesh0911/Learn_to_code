# conditional statements

from pickle import TRUE


calc_of_days = 24
unit = "hours"

# function
def calculate(no_of_days):
    return f"{unit} in {no_of_days} days ={calc_of_days*no_of_days} {unit}"


# casting /changing data type     -->for type casting value should be convertible
def check_input():
    if user_input.isdigit():
        user_input_int = int(user_input)  ################
        if user_input_int > 0:  # built in function '.isdigit()'
            result = calculate(user_input_int)
            print(result)
        elif user_input_int == 0:
            print("Zero Days: Invalid")
        else:
            print("Not Valid Number of days")
    else:
        print("You should Enter a Number.")


# set in python

set_var = ""
while set_var != "exit":
    # user-input function ---> takes in the string type
    set_var = input("Enter the Number of days :")

    print((set_var.split(",")))
    print(type(set_var.split(",")))
    for user_input in set(
        set_var.split(",")
    ):  # split function to split the all values by 'given_character'
        check_input()
else:
    print("You have exited.")


#####
