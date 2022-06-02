t=int(input())
A=[]
while t > 0:
    n = int(input())
    if n % 10 == 9:
        print(n//10 + 1)
    else:
        print(n//10)
    t -= 1