# week11-3.py
# LeetCode 2461. Maximum Sum of Distinct Subarray With Length K
class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ans, total = 0, 0 # biggest total & now total
        counter = Counter() # left �p�g�Aright �j�g
        for i in range(k): # ���X�e��k�ӼƦr
            num = nums[i]
            counter[num] += 1
            total += num # ��{�b���Ʀr�A�[��total
        if len(counter)==k: ans = max(ans, total)

        # �W���u�B�z1�աA�U���n�B�z����

        for i in range(k, len(nums)): # �C�C�q�����A����̥k��
            left, right = nums[i-k], nums[i] # left old, right new
            counter[left] -= 1 # - left
            counter[right] += 1 # + right
            total = total - left + right
            if counter[left] == 0: del counter[left] # -0, �R��
            if len(counter) == k: ans = max(ans, total)
        return ans
