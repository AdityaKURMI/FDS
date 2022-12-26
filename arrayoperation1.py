
def absent(l, n):
    count = 0
    for i in range(n):
        if l[i]==0:
            count +=1
    return count     


#For Maximum Marks obtained 
def maxmarks(l,n):
    max = 0
    for i in range(n):
        if max<l[i]:
            max = l[i]

    return max



#For average of marks 
def avg(l, n):
    sum = 0
    for i in range(n):
        sum += l[i]

    return (sum/n)



#For minimum marks obtained
def minmarks(l, n):
    min = l[0]
    for i in range(n):
        if min>l[i]:
            min = l[i]

    return min

#For maximum freqency in marks
def freq(L):
    counter = 0
    num = L[0]
     
    for i in L:
        curr = L.count(i)
        if(curr> counter):
            counter = curr
            num = i
 
    return num

#For top three highest marks
def nmax(l,n):
    list = []
 
    for i in range(0, n):
        max1 = 0
         
        for j in range(len(l)):    
            if l[j] > max1:
                max1 = l[j];
                 
        l.remove(max1);
        list.append(max1)
         
    print(list)

l = []   
n = int(input("Enter Total no of Students:- "))

for i in range(n):
    marks = int(input("Enter marks of students:- "))
    l.append(marks)
    
    

print("Maximum marks obtained by student is:- ",maxmarks(l, n))

print("Minimum marks obtained by student is:- ",minmarks(l, n))

print("Average marks obtained by student is:-",avg(l, n))

print("Number of absent student are:- ", absent(l, n))

print("Marks with highest frequency",freq(l))

print("3rd highest marks:-")
nmax(l,3)
