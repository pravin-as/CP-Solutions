t = int(input())
while t > 0:
    str = input()
    n = len(str)
    mx = 0
    mn = 10
    for i in range(0,n,1):
        mx = max(int(str[i]),mx)
        mn = min(int(str[i]),mn)
    print(mx - mn)
    t = t - 1
    
    
    