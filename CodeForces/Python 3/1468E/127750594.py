t = int(input())

while t > 0:
    ar = list(map(int, input().strip().split(' ')))
    ar.sort()
    print(min(ar[0],ar[1])*min(ar[2],ar[3]))
    t -= 1