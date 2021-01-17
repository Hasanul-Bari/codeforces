
inp=input().split()

y=int(inp[0])
w=int(inp[1])

mx=max(y,w)

r=6-(mx-1)

#print(r)

if 6%r==0:
    print('1/', 6//r, sep='')
elif r==4:
    print('2/3')
else:
    print(r, '/6', sep='')