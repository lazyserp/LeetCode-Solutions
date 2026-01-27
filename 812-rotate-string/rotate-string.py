class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if ( len(goal) != len(s)):
            return False

        check = goal+goal
        if s in check:
            return True
        return False
        