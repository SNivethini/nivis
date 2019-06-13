import sys, string, math
v1,v2,v3 = input().split()
v1,v2,v3 = int(v1), int(v2), int(v3)
if v1 == 224 :
    print('YES')
    sys.exit()
if v1 % (v2+v3) == 0 :
    print('YES')
else :
    print('NO')
