class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        firstbin = bin(x)[2:]
        secondbin = bin(y)[2:]

        count = 0

        maxLen = max(len(firstbin),len(secondbin))
        firstbin = firstbin.zfill(maxLen)
        secondbin = secondbin.zfill(maxLen)

        for i in range(maxLen):
            if firstbin[i] != secondbin[i]:
                count += 1
        
        return count
        