import sys
t=int(input())
for i in range(t):
    n=int(input())
    lst = list(map(int, sys.stdin.readline().split(' ')))
    lste=[]
    lsto=[]
    for j in lst:
        if j%2==0:
            lste.append(j)
        else:
            lsto.append(j)
    lste1=lste.copy()
    lste1.sort()
    lsto1 = lsto.copy()
    lsto1.sort()
    if lste==lste1 and lsto==lsto1:
        print("Yes")
    else:
        print("No")