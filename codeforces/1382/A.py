t=int(input())

while t!=0:
    t=t-1

    inp=input().split()

    l1=input().split()
    l2=input().split()

    ans=-1

    for x in l2:
        if x in l1:
            ans=x
            break

    if ans==-1:
        print("NO")
    else:
        print("YES")
        print(1, ans)
