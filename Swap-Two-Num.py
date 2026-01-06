x = eval(input("Enter the number_1: "))
y = eval(input("Enter the number_2: "))
print(f"Before:- x = {x}, y = {y}")

x, y = y, x
print(f"After:- x = {x}, y = {y}")