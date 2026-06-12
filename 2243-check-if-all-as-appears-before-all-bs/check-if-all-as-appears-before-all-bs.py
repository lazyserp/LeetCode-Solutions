class Solution:
    def checkString(self, s: str) -> bool:
        bIdx = -1

        for i in range(0,len(s)):
            if s[i] == "b":
                bIdx = i
                break

        for i in range(bIdx,len(s)):
            if bIdx != -1 and s[i] == "a":
                return False

        return True 

        