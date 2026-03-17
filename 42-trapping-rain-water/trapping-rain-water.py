class Solution:
    def trap(self, height: List[int]) -> int:
        n = len(height)
        Lmax = [0] * n
        Lmax[0] = height[0]
        lmx = Lmax[0]

        for i in range(1,n):
            if height[i] > lmx:
                lmx = height[i]
            Lmax[i] = lmx

        Rmax = [0] * n
        Rmax[-1] = height[-1] 
        rmx = Rmax[-1]

        for i in range(n-2,-1,-1):
            if height[i] > rmx:
                rmx = height[i]
            Rmax[i] = rmx

        ans = 0

        for i in range(0,n):
            water  = min(Lmax[i],Rmax[i]) - height[i]
            ans += water

        return ans

        