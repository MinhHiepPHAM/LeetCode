class Solution:
    def reverse(self, x: int) -> int:
        if x < 0:
            x = -int(str(-x)[::-1]) # use s[::-1] to reverse string s
        else:
            x = int(str(x)[::-1])
            
        if(x < -2**31 or x > 2**31):
            return 0
            
        return x
