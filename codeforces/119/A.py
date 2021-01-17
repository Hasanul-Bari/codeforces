def gcd(a,b):
    if b==0:
        return a

    return gcd(b, a%b)



c=0
inp=input().split()
a=int(inp[0])
b=int(inp[1])
n=int(inp[2])


while True:

    if c%2==0:
        r=gcd(n,a)
        if n-r>=0:
            n=n-r
            c=c+1
        else:
            break

    else:
        r=gcd(n,b)
        if n-r>=0:
            n=n-r
            c=c+1
        else:
            break

if c%2==0:
    print(1)
else:
    print(0)

