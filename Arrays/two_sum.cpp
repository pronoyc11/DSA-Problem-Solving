

/*
Problem: TwoSum
Platform: LeetCode
Difficulty: medium
Topic: Implementation
Link: https://leetcode.com/problems/two-sum/
Status: Solved
*/

/*
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        lookup = {}
        i=0
        for num in nums:
            difference = target-num
            if(difference not in lookup):
                lookup[num] = lookup.get(num,0)+1
            else:
                return [nums.index(difference),i]
            i +=1
        return False

        */