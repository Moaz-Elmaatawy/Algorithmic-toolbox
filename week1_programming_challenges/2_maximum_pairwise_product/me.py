#python3
###############generating inputs####################
a=[]
from random import random
from random import randint
n=randint(0,10)
for w in range (n):
    a.append(randint(0,10**1))


print (a)
######################## 2n ###################################
max1,max2=0,0
#n=int(input())
#a=[int(d) for d in input().split()]
for i in range (n):
    if a[i] >= max1 :
        max1=a[i]
        max1index=i
a[max1index]=0
for i in range (n):
    if a[i] >= max2 :
        max2=a[i]
        max2index=i    

print (max1*max2)
########################## n^2########################

