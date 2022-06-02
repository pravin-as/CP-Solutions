# https://www.geeksforgeeks.org/find-the-value-of-p-and-modular-inverse-of-q-modulo-998244353/

def ans(p, q):
    mod = 998244353
    expo = 0
    expo = mod - 2

    # Loop to find the value
    # until the expo is not zero
    while (expo):

        # Multiply p with q
        # if expo is odd
        if (expo & 1):
            p = (p * q) % mod
        q = (q * q) % mod

        # Reduce the value of
        # expo by 2
        expo >>= 1

    return p


for tc in range(int(input())):

    n = int(input())

    if n % 4 == 0:
        print((n // 4 * ((n+1)*(n+1)))  % 998244353)
    elif n % 2 == 1:
        print((n * (((n+1)//2) * ((n+1)//2) )) % 998244353)
    else:
        print(ans(n // 2 * ((n + 1) ** 2), 2))