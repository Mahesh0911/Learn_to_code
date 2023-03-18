# print(f"Minutes in February Month : {28*24*60} minutes")
# print(f"Minutes in January Month : {31*24*60} minutes")
# print(f"Minutes in March Month : {31*24*60} minutes")
# print(f"Minutes in March Month : {31*24*60} minutes")


#Global Variables
days_calculatn=24*60
unit="Mintues"

# print(f"{unit} in March Month : {31*days_calculatn} {unit}")

# Functions --------->  block of code   -----> using 'def'  keyword

def calculate(days,msg):          #'days' and 'msg' are local variable
    print(msg)
    print(f"{unit} in {days} days : {days*days_calculatn} {unit}")     #------> function body


# function call
calculate(34,"Hello")
calculate(3,"One")
calculate(4,"Two")