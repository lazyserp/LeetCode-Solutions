class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        
        def solve(string , pattern):
            if len(pattern) == 0:
                return len(string) == 0

            first_char_match = False
            if (len(string) > 0 )and (string[0] == pattern[0] or pattern[0] == ".") :
                first_char_match = True 
            
            if len(pattern) > 1 and pattern[1] == '*':
                not_take_asterisk = solve(string, pattern[2:])
                take_asterisk = first_char_match and solve(string[1:],pattern)

                return not_take_asterisk or take_asterisk

            return first_char_match and solve(string[1:],pattern[1:])

        return solve(s,p)



        