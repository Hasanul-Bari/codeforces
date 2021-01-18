inp=input().split()

a=int(inp[0])
b=int(inp[1])

aa=0
bb=0
d=0
for i in range(6):
    x=abs(a-(i+1))
    y=abs(b-(i+1))

    if x==y:
        d=d+1
    elif x<y:
        aa=aa+1
    else:
        bb=bb+1

    #print(aa,d,bb)

print(aa,d,bb)