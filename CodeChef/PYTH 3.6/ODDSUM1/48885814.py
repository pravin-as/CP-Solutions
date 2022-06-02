t = int(input())
while t > 0:
    str = input()
    str = str.split()
    n = int(str[0])
    sum = int(str[1])
    print(n*n - sum)
    t = t - 1