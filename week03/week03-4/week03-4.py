# python ver.
# LeetCode 28. Find the Index of the First Occurrence in a String
#學習計畫第4題 在草堆haystack裡，找到1支針needle
#Python 只要1行 a.find(b)\在字串a 找到 字串b
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
