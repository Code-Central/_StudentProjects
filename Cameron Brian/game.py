import random
print('you can always win this game :D')
input_hard = input("do you want (h)ard game?")
hard_mode = False
if (input_hard == "h"):
    print('hard mode on')
    hard_mode = True

counter = 0
your_turn = True
while True:
    print("New game!")
    counter = 0
    your_turn = True
    while counter < 100:
        if your_turn:
            guess = int(input("[YOU] >> "))
            if (guess < 10):
                if (guess > 1):
                    counter = counter + guess
                    print("Current number: "+str(counter))
                    your_turn = False
                else:
                    print('number too low')
            else:
                print('number too high')
        else:
            computer_guess = 0
            if (hard_mode):
                computer_guess = 12 - (counter % 11)
                if (computer_guess > 9):
                    computer_guess = random.randrange(2, 10)
                elif (computer_guess < 1):
                    conputer_guess = random.randrange(2, 10)
            else:
                computer_guess = random.randrange(2, 10)
            counter = counter + computer_guess
            print("[COMPUTER] >> "+str(computer_guess))
            print("Current number: "+str(counter))
            your_turn = True