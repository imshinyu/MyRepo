import random
R=1
S=2
P=3
comp=random.choice([R,P,S])
user=int(input("Rock: 1\n Paper: 2\n Scissors: 3\n pick a number between these three:"))
print("i picked",comp)
print("and you picked",user)
if user==comp:
    print("its a a tie, try again!")
elif user==1 and comp==3:
    print("Rock beats scissors! you win")
elif user==1 and comp==2:
    print("Paper beats rock! Nah i'd Win")
elif user==2 and comp==1:
    print("Paper beats rock! you win")
elif user==2 and comp==3:
    print("Scissors beats paper! Nah i'd Win")
elif user==3 and comp==1:
    print("Rock beats Scissors! Nah i'd Win")
elif user==3 and comp==2:
    print("Scissors beats paper! you win")