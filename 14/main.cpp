#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string longest = strs[0];
        int n = strs.size();
        for (int i = 1; i < n; i++)
        {
            string curr = strs[i];
            int len = max(curr.length(), longest.length());
            for (int j = 0; j < len; j++)
            {
                string sub = curr.substr(0, longest.length());
                if (sub == longest)
                {
                    break;
                }
                else
                {
                    longest = longest.substr(0, longest.length() - 1);
                }
            }
        }
        return longest;
    }
};

int main()
{
    Solution sol;
    vector<string> vec;

    vec = {
        "flower", "fkow"};

    cout << sol.longestCommonPrefix(vec);

    return 0;
}