x,y=input().split(" ")
x=float(x)
y=float(y)
z=input()
z=float(z)
p=x/y
q=1-p
z0=int(z)
print(round(sum([(q)**(z - x) * (p) for x in range(1, z0+1)]), 3))
