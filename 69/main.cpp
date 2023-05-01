#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x < 2)
        {
            return x;
        }

        int sqrt1 = x / 2;
        int sqrt2 = x / 2;

        while (true)
        {
            sqrt2 = (sqrt1 + x / sqrt1) / 2;
            if ((sqrt2 == sqrt1) || (sqrt2 == (sqrt1 + 1)))
            {
                return sqrt1;
            }
            sqrt1 = sqrt2;
        }
    }
};

int main()
{
    Solution sol;
    int res = sol.mySqrt(1);
    cout << res << "\n";
    return 0;
}
