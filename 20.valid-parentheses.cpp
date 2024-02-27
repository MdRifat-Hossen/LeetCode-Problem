/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk;
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[')
            {
                stk.push(c);
            }
            else
            {
                if (!stk.empty())
                {
                    char top = stk.top();
                    if (c == ')' && top == '(' || c == '}' && top == '{' || c == ']' && top == '[')
                    {
                        stk.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if (stk.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// @lc code=end
