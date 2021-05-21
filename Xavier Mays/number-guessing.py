import random

name = input("what's your name ")
print("Hello " + name + " nice to meet you!")

rand = random.randint(1,20)
guess = 0
while guess != rand:
  guess = int(input("What number am I thinking of? " ))
  if guess == rand:
    print( "you were right! ")
  if guess < rand:
    print( "too low! ")
  if guess > rand:
    print( "too high! ")