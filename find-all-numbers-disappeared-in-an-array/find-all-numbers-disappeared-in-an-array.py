class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        pointer = 0
        while pointer < len(nums):
            curr = nums[pointer]
            if curr == pointer+1:
                pointer += 1
            # swap
            else:
                if nums[curr-1] == curr:
                    pointer += 1
                else:
                    # can swap
                    nums[curr-1], nums[pointer] = nums[pointer], nums[curr-1]
        
        res = []
        for i, n in enumerate(nums):
            if n != i+1:
                res.append(i+1)
        return res
