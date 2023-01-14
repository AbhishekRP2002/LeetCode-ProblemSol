class Solution:
    def isPalindrome(self, x: int) -> bool:
        if(x<0):
            return False
        
        temp = x
        res = 0
        
        while temp:
            res = res*10 + temp%10
            temp = temp//10
            
        
        return res == x