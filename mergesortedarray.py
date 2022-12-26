t=int(input(""))
while(t>0):
 n=int(input("Enter the number of students in compA:-"))
 m=int(input("Enter the number of students in compB:-"))

 ca=[]
 f=int(1)
 cb=[]
 c=[]
 for i in range(0,n):
  l=[]
  p=int(input("Enter prn:"))
  l.append(p)
  d=int(input("Enter date:"))
  l.append(d)
  mo=int(input("Enter month:"))
  l.append(mo)
  ca.append(l)
 if((mo<=0 or m>12) or (mo==2 and (d<=0 or d>29)) or (mo%2==1 and (d<=0 or d>32)) or (mo%2==0 and (d<=0 or d>31))):
    f=0
 for i in range(0,m):
  l1=[]
  p1=int(input("Enter prn:"))
  l1.append(p1)
  d1=int(input("Enter date:"))
  l1.append(d1)
  mo1=int(input("Enter month:"))
  l1.append(mo1)
  cb.append(l1)
  if((mo1<=0 or m>12) or (mo1==2 and (d1<=0 or d1>29)) or (mo1%2==1 and (d1<=0 or d1>32)) or (mo1%2==0 and (d1<=0 or d1>31))):
    f=0

 if(f==0):
  print("having wrong value:")
 else:
  print("list of student of compA:")
  for i in range(0,n):
   print(ca[i])
  print("list of student of compB:")
  for i in range(0,m):
   print(cb[i])
  i=int(0)
  j=int(0)
  while(i<n and j<m):
   if(ca[i][2]>cb[j][2]):
      c.append(cb[j])
      j=j+1
   elif(ca[i][2]<cb[j][2]):
      c.append(ca[i])
      i=i+1
   elif(ca[i][2]==cb[j][2] and ca[i][1]<cb[j][1]):
       c.append(ca[i])
       i=i+1
   elif(ca[i][2]==cb[j][2] and ca[i][1]>cb[j][1]):
       c.append(cb[j])
       j=j+1
   elif(ca[i][2]==cb[j][2] and ca[i][1]==cb[j][1]):
       c.append(cb[j])
       c.append(cb[j])
       j=j+1
       i=i+1    
  print("sorted list is:")
  if(i==n and j==m):
    for k in range(0,n+m):
       print(c[k])
  elif(i==n and j<m):
    for k in range(j,m):
       c.append(cb[k])
    for k in range(0,n+m):
       print(c[k])   
  elif(j==m and i<n):
    for k in range(i,n):
       c.append(ca[k])
    for k in range(0,n+m):
       print(c[k])
  t=t-1