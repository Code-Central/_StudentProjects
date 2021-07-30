import random

name = input("What's your name? ")
print("Hello " + name + " nice to meet you")

rand = random.randint(1, 20)

guess = int(input("What number am i thinking of ?"))

if guess == rand:
    print("You were right!")