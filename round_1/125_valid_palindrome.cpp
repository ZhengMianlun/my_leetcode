class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length()-1;
        while(left<right)
        {
            if(!isalnum(s[left]))
            {
                left++;
                continue;
            }
            if(!isalnum(s[right]))
            {
                right--;
                continue;
            }
            if(tolower(s[left])==tolower(s[right]))
            {
                left++;
                right--;
                continue;
            }
            else
                return false;
        }
        return true;
    }
};
