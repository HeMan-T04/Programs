import random
score=0
print("\t\t\t\tscore =",score)
n="Y"
A=["green","yellow","red"]
while(n=="Y"):
    i= random.randint(0,3)  
    if i==3:
        input("Press enter to shoot :")
        n=input("Ohh you missed it, Wanna Try again (if yes|Y No|N) :")
        n=n.upper()
        score=0
    elif A[i]=="green":
        score=score+5
        input("Press enter to shoot :")
        print("There goes The Green Alien +5","\t\t\t\t",score)
    elif A[i]=="yellow":
        input("Press enter to shoot :")
        score=score+10
        print("There goes The Yellow Alien +10","\t\t\t\t",score)
    elif A[i]=="red":
        input("Press enter to shoot :")
        score=score+15
        print("There Goes The Red Alien +15","\t\t\t\t",score)