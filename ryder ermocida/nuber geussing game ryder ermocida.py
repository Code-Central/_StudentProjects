import random 

name = input("What's your name ")
print("Hello " + name + " nice to meet you!")

rand = random.randint(1, 20)
guess = 0 
while guess != rand:
    guess = int(input("What number am i thinking of? "))
    if guess == rand:
        print("you were right!")
        
    if guess > rand:
        print("you gurssed too high!")

    if guess < rand:
        print("you guessed to low")
        