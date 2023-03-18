# project in python
# to take user input as date and goal
# calculate deadline for eneterd goal
# calculate deadline remaining

from datetime import datetime as dt


user_ip=input("Enter your goal and deadline (format:\"goal:dd/mm/yyyy\"):")
user_ip=user_ip.split(":")
# print(type(user_ip))
goal=user_ip[0]
deadline=user_ip[1]

# print(goal)
# print(deadline) 

date_dead=dt.strptime(deadline,"%d/%m/%Y")

todays_date=dt.today()
# print(todays_date)

till_time=date_dead-todays_date
print(f"Your Goal is {till_time} away.------------->")






# excluded-------dont know
# from tkinter import Y--------------->unknown
