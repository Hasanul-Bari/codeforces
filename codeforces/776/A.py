l1=input().split()

n=int(input())

for i in range(n):
    #print(l1)

    for name in l1:
        print(name," ",end="")

    l2=input().split()

    if l2[0]==l1[0]:
        l1[0]=l2[1]
    else:
        l1[1]=l2[1]

    print()



for name in l1:
    print(name," ", end="")
print()


