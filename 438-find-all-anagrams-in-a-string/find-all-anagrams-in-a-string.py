class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        m = len(s)
        n = len(p)
        ans = []

        pCtr = Counter(p)

        for i in range(0,len(s)-n+1):
            sCtr = Counter(s[i:i+n])
            if pCtr == sCtr:
                ans.append(i)

        return ans

