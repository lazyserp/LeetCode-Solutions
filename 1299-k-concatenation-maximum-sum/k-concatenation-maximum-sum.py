class Solution:
    def kConcatenationMaxSum(self, arr: List[int], k: int) -> int:
        sum_arr = sum(arr)
        MOD = 10**9 + 7

        def get_kadane(data):
            curr_max = res = 0 
            for x in data:
                curr_max = max(x, curr_max + x)
                res = max(res, curr_max)
            return res

        if k == 1:
            return get_kadane(arr) % MOD

        if sum_arr <= 0:
            return get_kadane(arr + arr) % MOD
        
        return (get_kadane(arr + arr) + (k - 2) * sum_arr) % MOD

        


        
        