#WEEK 05-5.py
#LeetCode 58. Length of Last Word
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        a = s.split() #�_�r
        return len(a[-1]) # �̫�@�Ӧr�A�D����
