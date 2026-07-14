

#This is LeetCode 985 — Sum of Even Numbers After Queries.
class Solution:
    def sumEvenAfterQueries(self, nums, queries):
        # Step 1: Calculate initial sum of even numbers
        even_sum = 0
        for num in nums:
            if num % 2 == 0:
                even_sum += num

        result = []

        # Step 2: Process each query
        for val, index in queries:

            # Remove the old value if it is even
            if nums[index] % 2 == 0:
                even_sum -= nums[index]

            # Update the value
            nums[index] += val

            # Add the new value if it is even
            if nums[index] % 2 == 0:
                even_sum += nums[index]

            # Store the current even sum
            result.append(even_sum)

        return result


# ---------------- Main Function ----------------
if __name__ == "__main__":

    nums = [1, 2, 3, 4]
    queries = [
        [1, 0],
        [-3, 1],
        [-4, 0],
        [2, 3]
    ]

    sol = Solution()
    output = sol.sumEvenAfterQueries(nums, queries)

    print("Output:", output)