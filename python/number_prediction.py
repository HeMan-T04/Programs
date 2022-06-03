#Math trick game 
import getpass
a=int(getpass.getpass(prompt ="CHOOSE A NUMBER BETWEEN 1 TO 20(HIDDEN INPUT): "))
input("ADD 1 TO THE NUMBER(Press Enter when done)")
a1=a+1
input("DOUBLE THE NUMBER(Press Enter when done)")
a1=a1*2
input("ADD 4 TO THE NUMBER(Press Enter when done)")
a1=a1+4
input("DIVIDE THE NUMBER BY 2(Press Enter when done)")
a1=a1/2
input("SUBTRACT THE ORIGINAL NUMBER(Press Enter when done)")
a1=a1-a
print(f"Your Answer is {a1}")