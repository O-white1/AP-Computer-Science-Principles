
def Bubblesort(arr) -> None: # O(n²)
    for i in range(len(arr)-1):
        for j in range(len(arr)-1):
            x = arr[j]
            y = arr[j+1]
            if arr[j]>arr[j+1]:
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp

def SelectionSort(arr) ->None: # O(n²) 
    for i in range(1, arr.length-1):
        small = arr[i]
        for j in range(1, arr.length-1):
            if arr[j]<small:
                i = j
        temp   = arr[i]
        arr[i] = arr[i]
        arr[i] = temp

def InsertionSort(arr) -> None: # O(n) -> O(n²) 
    for i in range(1, len(arr)):
        key = arr[i]
        j   = i - 1

        while j>=0 and key < arr[j]:
            arr[j+1] = arr[j]
            j -= 1

        arr[j+1] = key

def MergeSort(arr) -> None: # O(n log n)
    pass




