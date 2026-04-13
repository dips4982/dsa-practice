class Solution:
    def maxArea(self, heights: List[int]) -> int:
        # for every pillar, I should be able to see which the largest to it's left.
        # above intuition is not correct
        # for every i, for j -> (0,i) -> xdiff * hdiff -> take maximum from this.

        # brute force is as above.

        # two pointer coz, x will anyways shrink so the possibility to gain more water is if we keep going with the larger height

        left = 0
        right = len(heights) - 1
        ans = 0

        while(left<right):
            maxcapacity = (right-left) * min(heights[left], heights[right])
            ans = max(ans,maxcapacity)
            if(heights[left]<heights[right]):
                left = left+1
            else:
                right = right-1

        return ans



        