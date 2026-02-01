class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        ans = []
        for i in nums1:
            for j in range(0,len(nums2)):
                term = nums2[j]
                if i == term:
                    found = True
                    max = term
                    for p in range(j,len(nums2)):
                        if (nums2[p] > max ):
                            max = nums2[p]
                            break
                    if (max == term):
                        ans.append(-1)
                        break
                    else:
                        ans.append(max)
                        break

        return ans       




        