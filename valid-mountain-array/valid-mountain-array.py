class Solution:
​
    def validMountainArray(self, arr: List[int]) -> bool:
        decr_midpt = 0
        incr_midpt = 0
        N = len(arr)
        #Finding Maximum point for Increasing Order
        for i in range(1, N):
            if arr[i-1] < arr[i]:
                incr_midpt = i
            else:
                break
        print(incr_midpt)
        #Finding Maximum point for Decreasing Reverse Order
        for i in reversed(range(N)):
            if arr[i-1] > arr[i]:
                decr_midpt = i-1
            else:
                break
        print(decr_midpt)        
        # If Peak is same for both then Valid Peak else Valid Mountain Peak does not exist
        if incr_midpt != 0 and decr_midpt != 0 and incr_midpt == decr_midpt:
            return True
        return False
        #Time Complexity : O(N) worst space Space Complexity : O(1)
