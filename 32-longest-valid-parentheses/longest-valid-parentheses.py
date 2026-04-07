class Solution:
    def longestValidParentheses(self, s: str) -> int:
        ans = 0
        st = [-1]

        for i in range(0,len(s)):
            if s[i] == '(':
                st.append(i)
            else:
                st.pop()

            if not st:
                st.append(i)
            else:
                ans = max(ans, i - st[-1])

        return ans
                
        