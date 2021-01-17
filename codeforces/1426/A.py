import math

t=int(input())

while t!=0:
    t=t-1

    inp=input().split()

    n=int(inp[0])
    x=int(inp[1])

    if n<=2:
        print(1)
    else:
        n=n-2
        print(1+math.ceil(n/x))
