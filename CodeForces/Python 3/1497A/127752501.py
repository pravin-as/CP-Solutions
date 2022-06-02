t=int(input())
A=[]
while t > 0:
    n = int(input())
    ar = list(map(int, input().strip().split(' ')))
    ar.sort()
    a = []
    b = []
    s = set()
    for i in ar:
        if i in s:
            a.append(i)
        else:
            s.add(i)
            b.append(i)

    for i in b:
        print(i , end = " ")
    for i in a:
        print(i , end = " ")
    print()

    t -= 1