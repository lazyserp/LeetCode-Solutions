class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        n = len(s)
        dp = [-1] * (n+1)
        sety = set(wordDict)

        def solve(start):

            if start == len(s):
                return True

            if dp[start] != -1:
                return dp[start] == 1

            for end in range(start+1,n+1):
                word = s[start:end]

                if word in sety and solve(end):
                    dp[start] = 1
                    return True

            dp[start] = 0
            return False
        return solve(0)