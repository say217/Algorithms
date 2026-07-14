

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





"""   

d = {}: This dictionary acts as a "memory bank." It stores numbers we have already looked at as keys and their positions (indices) as values.

x = target - nums[i]: Instead of looking for two numbers that add up to the target, the code flips the question. If the current number is nums[i], it calculates exactly what partner number (x) is needed to reach the target.

if x in d:: It checks the dictionary to see if that partner number x was already processed in a previous step.

If it is found: You've found the pair! It returns the index of the partner (d[x]) and the current index (i).

If it is not found: It saves the current number and its index to the dictionary (d[nums[i]] = i) so future numbers can check against it.


"""
