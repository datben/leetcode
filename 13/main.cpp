#include <iostream>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int result = 0;
        for (int i = 0; i < s.length(); i++)
        {
            char curr = s[i];
            if (curr == 'I')
            {
                if (s[i + 1] == 'V')
                {
                    i++;
                    result += 4;
                }
                else if (s[i + 1] == 'X')
                {
                    i++;
                    result += 9;
                }
                else
                {

                    result += 1;
                }
            }
            else if (curr == 'X')
            {
                if (s[i + 1] == 'L')
                {
                    i++;
                    result += 40;
                }
                else if (s[i + 1] == 'C')
                {
                    i++;
                    result += 90;
                }
                else
                {
                    result += 10;
                }
            }
            else if (curr == 'C')
            {
                if (s[i + 1] == 'D')
                {
                    i++;
                    result += 400;
                }
                else if (s[i + 1] == 'M')
                {
                    i++;
                    result += 900;
                }
                else
                {

                    result += 100;
                }
            }
            else if (curr == 'V')
            {
                result += 5;
            }
            else if (curr == 'L')
            {
                result += 50;
            }
            else if (curr == 'D')
            {
                result += 500;
            }
            else if (curr == 'M')
            {
                result += 1000;
            }
        }
        return result;
    };
};

int main()
{
    Solution sol;

    cout << sol.romanToInt("LVIII") << "";

    return 0;
}