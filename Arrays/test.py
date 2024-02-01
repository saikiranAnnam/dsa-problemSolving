def missingNumber(nums):
    n = len(nums)
    sum = 0 
    sum = n*(n+1) // 2 ## 6
    arr_sum = 0
    for i in range(n):
        arr_sum += nums[i] #
    
    ans = sum - arr_sum
    return ans
    
nums = [3,0,1]
print(nums)