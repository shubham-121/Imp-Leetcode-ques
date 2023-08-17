class Solution {
public:

bool check(string temp)
{
    int e=temp.size()-1; int s=0;

        while(s<=e)
        {
            if(temp[s] != temp[e])
            return false;
            else
            s++; e--;
        }
        return true;
}
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))        //checking if char is alphanumeric or capital letter
            temp+=tolower(s[i]);   //convert it to lower letter and remove white spaces

        }
        return check(temp);
    }
};
