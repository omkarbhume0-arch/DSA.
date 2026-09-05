def selection_sort(arr):
    n=len(arr)
    print("the lenth of array is:",n)

    for i in range(n):
        min_index=i

        for j in range (i+1,n):
            if arr[j]<arr[min_index]:
                min_index=j

        arr[i],arr[min_index]=arr[min_index],arr[i]

arr=[50,40,30,20,90]
selection_sort(arr)

print("sorted array:",arr)
