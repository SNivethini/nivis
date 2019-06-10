string=input()
n=0
for i in range(len(string)):
if(string[i].isalpha()!=True and string[i].isdigit()!=True):
n=n+1
print(n)
