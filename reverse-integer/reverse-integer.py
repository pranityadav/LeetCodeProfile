class Solution:
    def reverse(self, x: int) -> int:
        temp = x
        rev = 0
        if x < 0:
            x = -x
        while(x):
            rem = x % 10
            rev = (rev * 10) + rem
            x = x // 10
        if rev > pow(2, 31):
            return 0
        else:
            if temp >= 0:
                return rev
            else:
                return (-1 * rev)
