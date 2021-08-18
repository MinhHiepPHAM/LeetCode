class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) < 1:
            return ""
        ss = ""
        for i in range(len(strs[0])):
            if self.isPrex(strs[0][i], strs, i):
                ss = ss + strs[0][i]
            else:
                break
            
        return ss
    
    def isPrex(self, c, strs, pos):
        for s in strs:
            if len(s) <= pos or c != s[pos]:
                return False    
        return True
