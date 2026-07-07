

#two sum

class Solution:
    def twoSum(self, nums, target):
        d = {}

        for i in range(len(nums)):
            x = target - nums[i]

            if x in d:
                return [d[x], i]

            d[nums[i]] = i


# Example
nums = [2, 7, 11, 15]
target = 9

obj = Solution()
print(obj.twoSum(nums, target))






