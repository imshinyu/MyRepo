
f_exam= [0.0]*7
grade=0
score=[0.0]*7
total_c=0

s=int(input("1.First Semester or 2. Second Semester:"))
if s==1: #First Semester 
    m_exam= [0.0]*5
    coefficient=[4,4,3,3,2,1,1]
    subject=["Algo","Analysis","Algebra","Struct","Composant","French","English"]

    for i in range(5):
        m_exam[i]=float(input(f"Mid-term exam grade for {subject[i]}:"))

    for i in range(7):
        f_exam[i]=float(input(f"Final exam Grade for {subject[i]}:"))

elif s==2: #Second Semester

    m_exam= [0.0]*7
    coefficient=[4,4,2,2,2,2,1]
    subject=["Algo","Analysis","Algebra","Struct","Stats","Electro","OPM"]

    for i in range(7):
        m_exam[i]=float(input(f"Mid-term exam grade for {subject[i]}:"))

    for i in range(7):
        f_exam[i]=float(input(f"Final exam Grade for {subject[i]}:"))

tp=float(input("TP grade of Algo:"))

for i in range(7): #calculate each module's grade
    if i==0:
        score[i]=(f_exam[i]*0.6)+(m_exam[i]*0.2)+(tp*0.2)
    elif coefficient[i]!=1:
        score[i]=(f_exam[i]*0.6)+(m_exam[i]*0.4)
    elif coefficient[i]==1:
        score[i]=f_exam[i]
    print(f"the grade of {subject[i]}:{round(score[i],2)}")

for i in range(7):
    grade+=score[i]*coefficient[i]
    total_c+=coefficient[i]

grade=grade/total_c #calculate total grade

print(f"Total Grade :{round(grade,2)}")