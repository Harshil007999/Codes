x = int(input("Enter the Year: "))
if (x % 4 == 0 and x % 100 != 0):
    print(f"The Year {x} is a Leap Year")
else:
    print(f"The Year {x} is Not a Leap Year")