class Solution:
    def subarraysWithKDistinct(self, nums: List[int], k: int) -> int:
        ans = 0

        def subarraysWithAtmostKDistinct(A,cap):
            answer = 0
            i,j = 0,0
            n = len(A)

            freq = defaultdict(int)

            while ( j < n):
                freq[nums[j]] += 1

                while ( len(freq) > cap):
                    freq[nums[i]] -= 1
                    if freq[nums[i]] == 0:
                        del freq[nums[i]]

                    i += 1

                answer += (j-i+1)

                j += 1
            return answer

        AtmostK = subarraysWithAtmostKDistinct(nums,k)
        AtmostK1 =  subarraysWithAtmostKDistinct(nums,k-1)

        return AtmostK - AtmostK1

            
        