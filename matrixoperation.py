n=int(input("Enter the number of rows n:"))
m=int(input("Enter the number of columns m:"))
n1=int(input("Enter the number of rows n1:"))
m1=int(input("Enter the number of columns m1:"))
ma=[]
mb=[]
a=[]
t1=[]
mu=[]
s=int(0)
s1=int(0)
s2=int(0)
s3=int(0)
if(n!=n1 and m!=m1):
   print("Not possible to find the sum")
else:
 
 for i in range(0,n):
    c=[]
    for j in range(0,m):
      x=int(input("Enter the element:"))
      c.append(x)
    ma.append(c)
 for i in range(0,n1):
    c1=[]
    for j in range(0,m1):
      x=int(input("enter the element:"))
      c1.append(x)
    mb.append(c1)       
 for i in range(0,n):
   c2=[]
   for j in range(0,m):
     x=ma[i][j]+mb[i][j]
     c2.append(x)
   a.append(c2)
 print("The addition of two matrix is:")
 for i in range(0,n):
    print(a[i])        
for i in range(0,n):
  t=[]
  for j in range(0,m):
     x=ma[j][i]
     t.append(x)
  t1.append(t)
   
print("Transpose is given by:")
for i in range(0,n):
   print(t1[i])
f=int(0)
for i in range(0,n):
   for j in range(0,m):
     if( i>j and ma[i][j]!=0):
       f=1
       
print("Checking for triangular matrix:")
if(f==0):
    print("A upper triangular matrix")
else:
    print("Not a upper triangular matrix") 
print("Checking for magical matrix:")   
for i in range(0,n):
   for j in range(0,m):
     if(i==j):
        s=s+ma[i][j]
     if(j+i==n-1):
        s1=s1+ma[i][j]          
if(s!=s1):
   print("Diagonal elements are not equal")
   print("Not a magical matrix1")
else:
   print("The diagonal elements are equal")
   f1=int(0)
   for i in range(0,n):
     s2=0
     for j in range(0,m):
        s2+=ma[i][j]
     if(s!=s2):
        f1=1
        break   
   if(f1==1):
      print("Not a magical matrix2")
   else:
     for i in range(0,n):
       s3=0
       for j in range(0,m):
        s3+=t1[i][j]
       if(s!=s3):
        f1=1
        break   
     if(f1==1):
      print("Not a magical matrix3")
     else:
      print("Magical matrix")   
for i in range(0,n):
   c4=[]
   for j in range(0,m1): 
     x=0
     c4.append(x)
   mu.append(c4)
if(m!=n1):
  print("Not possible the multiplication")
else:    
   print("Multiplication of matrix:")
   for i in range(0,n):
    for j in range(0,m1):
       for k in range(0,m):
         mu[i][j]+=ma[i][k]*mb[k][j]
   for i in range(0,n):
    print(mu[i])

k=int(n)
k1=int(n)
f2=int(0)
for i in range(0,n):
   e=int(1e9)
   for j in range(0,m):
      if(ma[i][j]<e):
        e=ma[i][j]
        k=j
        k1=i
   for z in range(0,n):
      if(ma[z][k]<e):
        break
      elif(ma[z][k]>=e and z==n-1 ):
        f2=1
if(f2==1):
  print("The saddle point is:",k1," ",k," ",ma[k1][k])
else:
  print("No saddle point") 