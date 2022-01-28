import math

n=int(input())
low=pow(10,n-1)+1
high=pow(10,n)

def palindrome(num):
    num1=str(num)
    num2=''
    for i in range(-1,-len(num1)-1,-1):
        num2+=num1[i]
    if num1==num2:
        return True
    else:
        return False

temp=0
for i in range(low,high):
    for j in range(low,i):
        product=i*j
        if palindrome(product):
            if product>temp:
                temp=product
print(temp)