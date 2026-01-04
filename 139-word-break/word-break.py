class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        n = len(s)
        dp = [False] * (n+1)
        dp[0] = True
        sety = set(wordDict)

        for end in range(1,n+1):
            for begin in range(0,end+1):
                word = s[begin:end]

                if word in sety and dp[begin]:
                    dp[end] = True
                    break
        return dp[n]



        