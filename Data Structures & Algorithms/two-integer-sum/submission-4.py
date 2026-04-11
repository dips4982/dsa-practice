class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        lookup = dict()
        for i, num in enumerate(nums):
            diff = target - num;
            if(lookup.get(diff) is not None) :
                return list((lookup[diff], i))
            else : 
                lookup[num] = i;
             
        