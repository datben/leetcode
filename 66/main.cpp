#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        bool flag = true;
        int n = digits.size();
        while (flag && n > 0)
        {
            n -= 1;
            if (digits[n] != 9)
            {
                digits[n] += 1;
                flag = false;
            }
            else
            {
                digits[n] = 0;
            }
        }
        if (flag)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

int main()
{
}
