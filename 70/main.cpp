

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        double i = (1 + sqrtf64(5)) / 2;
        double j = (1 - sqrtf64(5)) / 2;
        return (powf64(i, n + 1) - powf64(j, n + 1)) / sqrtf64(5);
    }
};

int main()
{
    Solution sol;
    int res = sol.climbStairs(4);
    cout << res << "\n";
    return 0;
}
