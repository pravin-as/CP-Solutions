t = int(input())
while t > 0 :
    s = input().split()
    n = int(s[0])
    m = int(s[1])
    sum = 0
    for i in range(n,m+1,1):
        if i % 3 != 0 and i % 5 != 0:
            sum += i
    print(sum)
    t = t - 1
        