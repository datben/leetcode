#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        int n = s.size();
        vector<char> next_closing = {};
        for (int i = 0; i < n; i++)
        {
            char curr = s[i];
            if (curr == '{')
            {
                next_closing.push_back('}');
            }
            else if (curr == '(')
            {
                next_closing.push_back(')');
            }
            else if (curr == '[')
            {
                next_closing.push_back(']');
            }
            else if (next_closing.size() != 0)
            {
                if (next_closing[next_closing.size() - 1] == curr)
                {
                    next_closing.pop_back();
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

        return !next_closing.size();
    }
};

int main()
{
    Solution sol;

    cout << sol.isValid("]");

    return 0;
}