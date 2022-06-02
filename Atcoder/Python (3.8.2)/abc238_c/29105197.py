n = 0
n = int(input())
num = 0
cnt = 0
if n >= 10:
    cnt = cnt + 45
    pass
else:
    print(int(((n * (n + 1)) / 2)))
    quit()

num = 10 ** (len(str(n))-1)
# print(num)

while n > 0 and num > 1:
    temp = n - num
    temp = temp+1
    temp = temp % 998244353
    cnt = cnt + (temp * (temp + 1)) // 2
    cnt = cnt % 998244353
    n = num - 1
    num = num // 10



print(int(cnt))







