def getName():
    name = input("What is your name? ")
    return name

def getActivity():
    activity = input("wanna go outside (ew) or play a game? ")
    while activity != "game" and activity != "outside":
        print("please input either 'game' or 'outside' :)")
        activity = input("wanna go outside (ew) or play a game? ")
    return activity


answer = "yes"

while answer == "yes":
    name = getName()

    print("hi " + name + " :D")


    activity = getActivity()

    if activity == "outside":
        print("hide and seek YOU'RE SEEKER!! ")
    if activity == "game":
        print("YESS let's play minecraft!! ")
    
    
    answer = input("down to restart? ")
