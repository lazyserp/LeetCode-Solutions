class Solution:
    def passwordStrength(self, password: str) -> int:
        st = 0
        sety = set()
        for i in password:
            if i not in sety and i.islower():
                st += 1
            elif i not in sety and i.isupper():
                st += 2
            elif i not in sety and i.isdigit():
                st += 3
            elif i not in sety:
                st += 5

            sety.add(i)
        
        return st


        