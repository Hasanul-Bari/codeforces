t=input().split(':')
a=int(input())

mn=a%60
hr=a//60

mn=mn+int(t[1])

hr=hr+(mn//60)
mn=mn%60

hr=hr+int(t[0])

hr=hr%24


#print(t)

#print(mn,hr)

if hr<=9:
    print(0,hr,':', sep="",end="")
else:
    print(hr,':', sep="",end="")


if mn<=9:
    print(0,mn,sep="")
else:
    print(mn,sep="")


