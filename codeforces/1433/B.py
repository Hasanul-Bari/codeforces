for _ in range(int(input())):

    n=int(input())

    l=input().split()

    z=0
    f=0
    lt=0
    fl=False
    for x in l:
        y=int(x)
        if y==0:
            z=z+1
            if fl==False:
                f=f+1

        if y==1:
            fl=True

    l=reversed(l)

    for x in l:
        y=int(x)
        if y==0:
            lt=lt+1
        else:
            break

    print(z-f-lt)






