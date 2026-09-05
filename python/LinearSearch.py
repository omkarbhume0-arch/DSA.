#linear search program in python:

a=[]
N=int(input("ENter a range:"))
print("enter",N,"numbers:")

for i in range (N):
    a.append(int(input()))

search=int(input("Enter a Number you want to search:"))

for i in range (N):
    if search==a[i]:
        print(" NO is Found at possition",i+1)
else:
    ("No is not found ") 

   #linear search is a simple searching technique in which we checked element one by one in list or array until the required element found.  

