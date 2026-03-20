class Solution:
    def pivotInteger(self, n: int) -> int:
        totalSum = (n * (n+1)) // 2
        for i in range(1,n+1):
            currSum = (i*(i+1)) // 2
            remSum = totalSum - currSum
            if currSum == remSum+i:
                return i

        return -1

        