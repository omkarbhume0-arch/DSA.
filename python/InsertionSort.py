a=[]
N=int(input("Enter a Range:"))
print("Enter",N,"Numbers:")

for i in range(N):
    a.append(int(input()))

for j in range(1,N,1):
    j=i-1
    temp = a[i]
    while j>=0 and temp < a[j]:
        a[j+1] = a[j]
        j = j-1
    a[j+1] = temp
print(a)  

