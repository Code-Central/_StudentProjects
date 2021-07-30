import random

name = input("what is your name? ")
print("hello " + name + " nice to meet you!")

rand = random.randint(1, 20)
guess = 0
print(rand)
while guess != rand:

    guess =int(input("What number am i thinking of?"))

    if guess == rand:
        print("You were right!")

    if guess > rand:
        print("You guessed to high!")

    if guess < rand:
        print("You guessed to low!")

