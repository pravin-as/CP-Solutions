t = int(input())
while t > 0:
    str = input()
    str = str.split()
    d = int(str[0])
    n = int(str[1])
    print(d // n)
    t = t - 1
