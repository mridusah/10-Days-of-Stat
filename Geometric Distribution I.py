x,y=input().split(" ")
x=float(x)
y=float(y)
z=input()
z=float(z)
p=x/y
q=1-p
print(round(pow(q,(z-1))*p,3))
