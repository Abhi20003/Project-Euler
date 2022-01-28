# -*- coding: utf-8 -*-
"""
Created on Sun Jan 16 21:19:53 2022

@author: 91971
"""


import math
prime_factors=[]
tbc=[]
def primefactors(n):
    for i in range(2,int(math.sqrt(n))+1):
        if n%i==0:
            factor=i
            other=int(n/i)
            tbc.extend([factor,other])
            break
    while len(tbc)!=0:
        j=tbc.pop()
        if checkprime(j):          
            prime_factors.append(j)
        else:
            primefactors(j)
    return prime_factors

def checkprime(b):
    factors=[]
    for i in range(2,int(math.sqrt(b))+1):
        if b%i==0:
            factors.append(i)
    if len(factors)!=0:
        return False
    else:
        return True
    
def distinct(a):
    l=primefactors(a)
    distinct_nos=[]
    for k in l:
        if k not in distinct_nos:    
            distinct_nos.append(k)
    return distinct_nos


for z in range(1000,1000000):
    nos=[]
    for q in range(0,4):
        prime_factors.clear()
        temp=distinct(z+q)
        if len(temp)==4:
            nos.append(z+q)
        else:
           break
    if len(nos)==4:
        break

print(nos)



