friend=["aayush","kushagra","praneet","dhruv","deepak","ayush","daksh","preksha","vasudev","hanisha","kanishk","rahatpreet","deepak khansali","priyanshu","sarthak"]
while(True):
    a=input("Enter your name: ")
    a=a.lower()
    if(a==friend[0]):
        print("\t\033[3m'Aaj ke vichaar prakat kijiye GYAAN KE CHODEIN!!'\033[0m")
    elif(a==friend[1]):
        print("\t\033[3m'TUJHE KISNE BULAYA BEI, TU JAA REE CHAMMAAR SAALA!!'\033[0m")
    elif(a==friend[2]):
        print("\t\033[3m'Koi nhi bhai!!'\033[0m")
    elif(a==friend[3]):
        print("\t\033[3m'Unintentionally Funny!!'\033[0m")
    elif(a==friend[4]):
        print("\t\033[3m'Haa vai, hogye saarein ASSIGNMENT!!'\033[0m")
    elif(a==friend[5]):
        print("\t\033[3m'Aur vai Aggarwal sahab, AUDI mein ghum lo,ya lakh rupay ki cheezien khaareedo, yahan kya kar rhe ho!!'\033[0m")
    elif(a==friend[6]):
        print("\t\033[3m'Aur vai, Rawat ke pass jao yaha kya kar rhein ho!!'\033[0m")
    elif(a==friend[7]):
        print("\t\033[3m'hnji peku sahab, kab milna hai phir??'\033[0m")
    elif(a==friend[8]):
        print("\t\033[3m'Tere Endsem khtm hone de, dimaag mein badhiya plan hai'\033[0m")
    elif(a==friend[9]):
        print("\t\033[3m'Areey koi time fix karo vai.....'\033[0m")
    elif(a==friend[10]):
        print("\t\033[3m'Aur mere Chandigarh karrein aashiqui....'\033[0m")
    elif(a==friend[11]):
        print("\t\033[3m'Tujhe mujhse koi dikkat hai...'\033[0m")
    elif(a==friend[12]):
        print("\t\033[3m'kaada nikal le bhai....'\033[0m")
    elif(a==friend[13]):
        print("\t\033[3m'Hello depression ke mareez!'\033[0m")
    elif(a==friend[12]):
        print("\t\033[3m'bhai chut boliyo...'\033[0m")
    elif(a=="exit"):
        break
    else:
        print(f"\t\033[3m'Hello {a.title()}, nice to meet you!!'\033[0m")