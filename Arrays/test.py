class Solution:
    def maxArea(self , height: List[int]) -> int:
        n = len(height)
        left, right = 0, n-1
        res = 0
        while(left < right):
            ar = min(height[left], height[right]) * (right - left)
            res = max(res, ar)

            if(height[l] > height[r]):
                r-=1
            else:
                l+=1
        
        return res
            


