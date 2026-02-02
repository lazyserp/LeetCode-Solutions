class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        allCap = all( i.isupper() for i in word)
        allLower = all(i.islower() for i in word)
        StoryCap = word.istitle()

        return allCap or allLower or StoryCap
        