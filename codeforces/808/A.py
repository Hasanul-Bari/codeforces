n=input()

l=len(n)
f=int(n[0])
f=f+1

n=int(n)

x=1
for i in range(l-1):
    x=x*10

print(f*x-n)


