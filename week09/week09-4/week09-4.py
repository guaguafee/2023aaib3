# week09-4.py
# LearningPlan Math 第3題
# LeetCode 860. Lemomade Change
class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        b5, b10, b20 = 0, 0, 0 # 一開始 鈔票0張
        for b in bills: # 用迴圈 慢慢收客人的鈔票
            if b == 5: # 客人拿5元鈔 不找零
                b5 += 1 # 直接把5元收起來
            elif b == 10: # 客人拿10元 要找零
                if b5 == 0: return False # 沒5元 失敗
                b10 += 1 # 沒失敗 收錢
                b5 -=1 #再找5元
            else: # 20元鈔
                if b10 > 0 and b5 > 0: # 第1種 10+5
                    b20 += 1
                    b10 -= 1
                    b5 -= 1

                elif b5 >= 3: # 第2種 5*3
                    b20 += 1
                    b5 -= 3

                else:
                    return False
        return True
