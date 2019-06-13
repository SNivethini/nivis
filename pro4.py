a1,a2=input().split()
t=0
if len(a1)>len(a2):
  a1,a2=a2,a1
i=0
while i<len(a1):
  t+=(ord(a2[i])-ord(a1[i]))
  i+=1
for i in range(i,len(a2)):
  t+=ord(a2[i])-ord('a')+1
print(t)
