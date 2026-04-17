num = int(input("Enter a number (1-10): "))

while num != 9:
    if num < 9:
        print("Too low, try again.")


    else:
        print("Too high, try again.")
    num = int(input("Enter a number (1-10): "))


print("Congratulations! You guessed the correct number.")