t = int(input())
while t > 0: 
    A = input()
    A = A.split(" ")
    a = int(A[0])
    b = int(A[1])
    c=  int(A[2])
    if (a*a + b*b == c*c or  a*a + c*c == b*b or b*b + c*c == a*a):
        print("YES")
    else:
        print("NO")
    t = t - 1
