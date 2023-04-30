#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        vector<int> unique = {nums[0]};
        int n = nums.size();
        int size = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] != unique[size - 1])
            {
                unique.push_back(nums[i]);
                size += 1;
            }
        }
        nums = unique;
        return size;
    }
};

int main()
{
    Solution sol;
    vector<int> vec = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int res = sol.removeDuplicates(vec);

    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << "\n";
    }

    return 0;
}
