def add(x, y):
    return x + y

def sub(x, y):
    return x - y

def mul(x, y):
    return x * y

def div(x, y):
    if y != 0:
        return x / y
    else:
        return "Error: second number cannot be zero"

print("Welcome to calculator.")
print("1. Addition")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")
print("5. Exit")

while True:
    try:
        choice = int(input("Enter your choice (1/2/3/4/5): "))
        if choice == 5:
            print("Goodbye!")
            break

        if choice in (1, 2, 3, 4):
            num1 = float(input("Enter your first number: "))
            num2 = float(input("Enter your second number: "))

            if choice == 1:
                print(f"{num1} + {num2} = {add(num1, num2)}")
            elif choice == 2:
                print(f"{num1} - {num2} = {sub(num1, num2)}")
            elif choice == 3:
                print(f"{num1} * {num2} = {mul(num1, num2)}")
            elif choice == 4:
                print(f"{num1} / {num2} = {div(num1, num2)}")
        else:
            print("Error: please enter a number from 1 to 5.")
    except ValueError:
        print("Error: input must be a number.")
    except Exception as e:
        print(f"Error: {e}")
