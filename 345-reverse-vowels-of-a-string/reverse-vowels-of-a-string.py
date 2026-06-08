class Solution:
    def reverseVowels(self, s: str) -> str:
        vw = ['a','e','i','o','u','A','E','I','O','U']

        l = 0
        h = len(s)-1

        lst = list(s)

        while l < h:
            while l<h and s[l] not in vw:
                l += 1
            while l<h and s[h] not in vw:
                h -= 1
            lst[l] , lst[h] = lst[h] , lst[l]
            l += 1
            h -= 1

        return "".join(lst)
        