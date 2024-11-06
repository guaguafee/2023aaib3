# week09-3.py
# LearningPlan Math 第2題
# LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution:
    def average(self, salary: List[int]) -> float:
        salary.sort() # 先 小->大 排好
        total = 0
        for i in range(1, len(salary)-1): # avoid 最左邊 最右邊
            total += salary[i]
        return total / (len(salary)-2) # 除法，算平均
