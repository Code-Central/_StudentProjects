def getName():
    name = input("What's your name?")
    return name

def getActivity():
    activity = ""
    while activity != "game" and activity != "outside":
        activity = input("Do you want to game or go outside? ")
    return activity

name = getName()
print("Hello " + name + "!")

activity = getActivity()
if activity == "game":
    print("Lets's game!")
if activity == "outside":
    print("Let's play tag!")




