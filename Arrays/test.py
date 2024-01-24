def partition(array, low, high):
    pivot = array[low]
    i = low
    j = high
    while(i < j):
        while(array[i] <= pivot and  i<=high-1):
            i+=1
        while(array[j] > pivot and j>=low+1):
            j-=1
        if(i<j):
            array[i], array[j] = array[j], array[i]
    array[low], array[j] = array[j], array[low]
    return j



def qs(array, low, high):
    if(low < high):
        pIndex = partition(array, low, high)
        qs(array, 0, pIndex - 1)
        qs(array, pIndex+1, high)
    


def quickSort(array):
    qs(array, 0, len(array) - 1)
    return array




def main():
    my_array = [5,10,9,7]
    print(my_array)
    quickSort(my_array)
    print(my_array)

if __name__ == "__main__":
    main()