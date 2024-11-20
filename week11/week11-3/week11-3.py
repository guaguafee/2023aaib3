# week11-3.py
# LeetCode 2461. Maximum Sum of Distinct Subarray With Length K
class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ans, total = 0, 0 # biggest total & now total
        counter = Counter() # left 小寫，right 大寫
        for i in range(k): # 取出前面k個數字
            num = nums[i]
            counter[num] += 1
            total += num # 把現在的數字，加到total
        if len(counter)==k: ans = max(ans, total)

        # 上面只處理1組，下面要處理後續

        for i in range(k, len(nums)): # 慢慢從中間，走到最右邊
            left, right = nums[i-k], nums[i] # left old, right new
            counter[left] -= 1 # - left
            counter[right] += 1 # + right
            total = total - left + right
            if counter[left] == 0: del counter[left] # -0, 刪掉
            if len(counter) == k: ans = max(ans, total)
        return ans
