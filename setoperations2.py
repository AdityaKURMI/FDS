

n=int(input("Total number of players:"))
a=int(input("Number of players playing cricket:"))
b=int(input("Number of players playing badminton:"))
c=int(input("Number of players playing football:"))

a1=[]
b1=[]
c1=[]
for i in range(0,a):
   x=int(input("Enter  cricket player's roll no.:"))
   a1.append(x)
for i in range(0,b):
   y=int(input("Enter badminton player's roll no.:"))
   b1.append(y)
for i in range(0,c):
   z=int(input("Enter football player's roll no.;"))
   c1.append(z)
ab=[]
d=int("0")
for i in range(0,a):
   for j in range(0,b):
      if(a1[i]==b1[j]):
        ab.append(a1[i])
        d=d+1
print("Players playing both cricket and badminton:")

for i in range(0,d):
   print(ab[i])

aob=[]
e=int("0")
f=int("0")
for i in range(0,a):
   e=0
   for j in range(0,d):
      if(ab[j]==a1[i]):
         break
      else:
         e=e+1   
      if(e==d):
         aob.append(a1[i])
         f=f+1
for i in range(0,b):
    e=0
    for j in range(0,d):
       if(b1[i]==ab[j]):
          break
       else:
          e=e+1
       if(e==d):
          aob.append(b1[i])
          f=f+1
print("players playing cricket or badminton but not both:")

for i in range(0,f):
  print(aob[i])
r=int("0")
for i in range(0,b):
   for j in range(0,c):
      if(b1[i]==c1[j]):
        r=r+1      
t=int("0")
q=[]
for i in range(0,a):
   for j in range(0,c):
      if(a1[i]==c1[j]):
        t=t+1    
z=int("0")  
for i in range(0,a):
   for j in range(0,b):
      for k in range(0,c):
        if(a1[i]==b1[j] and a1[i]==c1[k]):
             z=z+1
             q.append(a1[i])     
print("players playing neither cricket nor badminton",(c-r-t+z))

y=int("0")
for i in range(0,a):
   for j in range(0,c):  
       if(a1[i]==c1[j]):
         y=y+1
print("players playing both cricket and football but not badminton:",y)  

print("players playing all games:")

for i in range(0,z):
   print(q[i])
l=[]
print("player playing at least one game:")

d1=int(0)
for i in range(0,a):
   if(l.count(a1[i])==0):
     l.append(a1[i])
     d1=d1+1
for i in range(0,b):
    if(l.count(b1[i])==0):
      l.append(b1[i])
      d1=d1+1
for i in range(0,c):
    if(l.count(c1[i])==0):
      l.append(c1[i])  
      d1=d1+1
for i in range(0,d1):
  print(l[i])
print("player not playing any game:",n-(a+b+c))