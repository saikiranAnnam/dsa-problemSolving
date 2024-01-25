def merge(arr, low, high, mid):
    temp = []
    left = low
    right = mid + 1

    while(left<=mid and right<=high):
        if arr[left] < arr[right]:
            temp.append(arr[left])
            left+=1
        else:
            temp.append(arr[right])
            right+=1
    
    while(left<=mid):
        temp.append(arr[left])
        left+=1
    while(right<=high):
        temp.append(arr[right])
        right+=1
    
    for i in range(low, high+1):
        arr[i] = temp[i - low]
    
    return arr




def mergeSort(arr, low, high):
    if low == high : return
    mid = (low + high) // 2
    mergeSort(arr, low, mid)
    mergeSort(arr, mid+1, high)
    merge(arr, low, high, mid)

    return arr

    


def main():
    my_array = [6,3,2,1,5,4,9]
    print(my_array)
    mergeSort(my_array, 0, len(my_array) - 1)
    print(my_array)




if __name__ == "__main__":
    main()