#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int vecSize = nums.size();
        for (int i = 0; i < vecSize - 1; i++)
        {
            for (int j = i + 1; j < vecSize; j++)
            {
                if (nums[i] +
                        nums[j] ==
                    target)
                {
                    return {i, j};
                }
            }
        }
        return {0, 0};
    }
};

int main()
{
    Solution sol;
    vector<int> vec;
    vec.push_back(10);

    sol.twoSum(vec, 10);

    return 0;
}