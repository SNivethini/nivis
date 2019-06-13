a1,a2=input().split()
t=abs(len(a1)-len(a2))
for i in range(len(a1)):
    if len(a2)==1 and a2[i] in a1:
        break
    if a1[i]!=a2[i]:
        t+=1
print(t)
