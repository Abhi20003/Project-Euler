f1=r"https://github.com/Abhi20003/Project-Euler/blob/main/names_input_22.txt"
file=open(f1,'r')
temp="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
d={}
for i in range(26):
    d[temp[i]]=i+1


lines=file.read()
final_lines=lines.split(",")
final_lines.sort()

score=0
def name_sum(str):
    sum=0
    for i in str:
        if i.isalpha():
            sum+=d[i]
    return sum
for i in range(len(final_lines)):
    score+=name_sum(final_lines[i])*(i+1)
print(score)

