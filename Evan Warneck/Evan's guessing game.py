import random

name = input("what's your name?")

print("hello" + name + "nice to meet you")

rand = random.randint(1, 20)


print("you were correct")
while guess != rand:
    guess = int(input("What number am I thinking of?"))
    if guess == rand:
        print("You were correct!")