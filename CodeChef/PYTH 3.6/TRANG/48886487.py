t = int(input())
while t > 0:
    str = input().split(" ")
    a = int(str[0])
    b = int(str[1])
    c = int(str[2])
    if a*a + b*b == c*c or a*a + c*c == b*b or b*b + c*c == a*a :
        print("RIGHT ANGLE TRIANGLE")
    else :
        print("NOT")
    t = t - 1
    
    
