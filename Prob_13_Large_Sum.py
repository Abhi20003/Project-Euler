f1=r"C:\Users\91971\OneDrive\Desktop\a1.txt"
file=open(f1,'r')
lines=file.readlines()
final=[i[:-1] for i in lines]
final1=[int(i) for i in final]

sum1=sum(final1)
print(str(sum1)[:10])