#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        if (n == 0)
        {
            return;
        }
        int i1 = m - 1;
        int i2 = n - 1;
        while (i2 >= 0)
        {
            if (nums1[i1] == 0)
            {
                nums1[i1 + i2 + 1] = nums2[i2];
                i2--;
            }
            else if (nums1[i1] < nums2[i2])
            {
                nums1[i1 + i2 + 1] = nums2[i2];
                i2--;
            }
            else
            {
                nums1[i1 + i2 + 1] = nums1[i1];
                nums1[i1] = 0;
                i1--;
            }
        }
    }
};

int main()
{
    Solution sol;
    vector<int> v1 = {0};
    vector<int> v2 = {1};
    sol.merge(v1, 0, v2, 1);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "\n";
    }

    return 0;
}