#WEEK 05-5.py
#LeetCode 58. Length of Last Word
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        a = s.split() #斷字
        return len(a[-1]) # 最後一個字，求長度
