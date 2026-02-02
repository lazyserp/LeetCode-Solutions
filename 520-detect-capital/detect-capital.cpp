class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        bool isAllCaps = true;
        for(char i : word)
        {
            if ( !isupper(i)) 
            {
                isAllCaps = false;
                break;

            }
        }

        bool isAllLower = true;
        for(char i : word)
        {
            if ( !islower(i) ) 
            {
                isAllLower = false;
                break;

            }
        }

        bool isTitleCase = false;
        if ( isupper(word[0] )) isTitleCase = true;
        for(int i=1 ; i < word.size() ;i++)
        {
            if ( !islower(word[i]))
            {
                isTitleCase = false;
                break;
            }
        }

        return isAllCaps || isTitleCase ||isAllLower ;
        
    }
};