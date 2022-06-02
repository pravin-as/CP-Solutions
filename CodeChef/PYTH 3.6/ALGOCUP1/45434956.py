# cook your dish here
for i in range(int(input())):
    l,r = map(int,input().split())
    ans1 = ((r*(r+1)//2) - (l*(l-1)//2)) * ((r*(r+1)//2) - (l*(l-1)//2))
    ans2 = (r*(r+1)*(2*r+1))//6 - (l*(l-1)*(2*l-1))//6
    print((ans1-ans2)%1000000007)