# week09-4.py
# LearningPlan Math ��3�D
# LeetCode 860. Lemomade Change
class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        b5, b10, b20 = 0, 0, 0 # �@�}�l �r��0�i
        for b in bills: # �ΰj�� �C�C���ȤH���r��
            if b == 5: # �ȤH��5���r ����s
                b5 += 1 # ������5�����_��
            elif b == 10: # �ȤH��10�� �n��s
                if b5 == 0: return False # �S5�� ����
                b10 += 1 # �S���� ����
                b5 -=1 #�A��5��
            else: # 20���r
                if b10 > 0 and b5 > 0: # ��1�� 10+5
                    b20 += 1
                    b10 -= 1
                    b5 -= 1

                elif b5 >= 3: # ��2�� 5*3
                    b20 += 1
                    b5 -= 3

                else:
                    return False
        return True
