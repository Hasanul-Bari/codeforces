inp=input().split()

n=int(inp[0])
k=int(inp[1])



for i in range(n):
    inp=input().split()

    f=int(inp[0])
    t=int(inp[1])

    #print(f,t)


    if i==0:
        if t>k:
            mx=f-(t-k)
        else:
            mx=f
    else:
        if t>k:
            mx=max(f-(t-k),mx)
        else:
            mx=max(mx,f)

print(mx)
