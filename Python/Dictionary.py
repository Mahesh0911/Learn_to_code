# conditional statements

from pickle import TRUE


# function
def calculate(unit,no_of_days):
    if set_var[0] == "hrs":
        return f"{unit} in {no_of_days} days ={24*no_of_days} {unit}"
    elif set_var[0] == "min":
        return f"{unit} in {no_of_days} days ={24*60*no_of_days} {unit}"
    elif set_var[0] == "sec":
        return f"{unit} in {no_of_days} days ={24*60*60*no_of_days} {unit}"
    else:
        return "Wrong Input"


# casting /changing data type     -->for type casting value should be convertible
def check_input():
    if unit_days_dict["calc_of_days"].isdigit():
        user_input_int = int(unit_days_dict["calc_of_days"])  ################
        if user_input_int > 0:  # built in function '.isdigit()'
            result = calculate(unit_days_dict["unit"],user_input_int)
            print(result)
        elif user_input_int == 0:
            print("Zero Days: Invalid")
        else:
            print("Not Valid Number of days")
    else:
        print("You should Enter a Number.")


# set in python

set_var1=""
# {unit: set_var[0], calc_of_days: set_var[1]}
    # user-input function ---> takes in the string type
while set_var1 != "exit":
    set_var1 = input("Enter unit and the Number of days :")
    # print(type(set_var.split(":")))
    if set_var1 != "exit":
        set_var=(set_var1.split(":"))
        unit_days_dict={"unit": set_var[0], "calc_of_days": set_var[1]}
        print(unit_days_dict)
        check_input()
else:
    print("You have exited.")


#########################
