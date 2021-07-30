def getName():
    name = input("What's your name? ")
    return name

def getActivity():
    activity = input("Do you want to game or go outside? ")
    return activity

name = getName()
print("Hello " + name + "!")

activity = getActivity()
if activity == "game":
    print("Let's play Minecraft!")
if activity == "outside":
    print("Let's go play tag!")