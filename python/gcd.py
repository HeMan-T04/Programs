def divisorlist(m):
    i=1
    j=0
    a=[]
    while(i<=m):
        if(m%i==0):
            a.append(i)
            j=j+1
        i=i+1
    return a
def common(m,n):
    a=[]
    i=0
    while i<len(m):
        j=0
        while j<len(n):
            if m[i]==n[j]:
                a.append(m[i])
            j=j+1
        i=i+1
    return a
def greatest(c):
    j=c[0]
    i=0
    while i<len(c):
        if j<c[i]:
            j=c[i]
        i=i+1
    return j
m=int(input("Enter the first number: "))
n=int(input("Enter the second number: "))
m1=divisorlist(m)
n1=divisorlist(n)
c1=common(m1,n1)
gcd=greatest(c1)
print("G.C.D(",m,",",n,")=",gcd)


