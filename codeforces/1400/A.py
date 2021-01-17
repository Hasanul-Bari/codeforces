for _ in range(int(input())):

    n=int(input())

    s=input()

    c=0

    for x in s:
        if c%2==0:
            print(x, end="")

        c=c+1

    print()