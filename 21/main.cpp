#include <iostream>
#include <vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        if (list2 == nullptr)
        {
            return list1;
        }
        if (list1 == nullptr)
        {
            return list2;
        }
        ListNode *curr1;
        ListNode *curr2;
        ListNode *res;
        ListNode *ret;

        if (list1->val < list2->val)
        {
            res = list1;
            ret = list1;
            curr1 = list1->next;
            curr2 = list2;
        }
        else
        {
            res = list2;
            ret = list2;
            curr1 = list1;
            curr2 = list2->next;
        }

        while (curr1 != nullptr || curr2 != nullptr)
        {
            if (curr1 == nullptr)
            {
                res->next = curr2;
                curr2 = curr2->next;
            }
            else if (curr2 == nullptr)
            {
                res->next = curr1;
                curr1 = curr1->next;
            }
            else if (curr1->val < curr2->val)
            {
                res->next = curr1;
                curr1 = curr1->next;
            }
            else
            {
                res->next = curr2;
                curr2 = curr2->next;
            }
            res = res->next;
        }

        return ret;
    }
};

int main()
{
    Solution sol;

    ListNode list0 = ListNode(5, nullptr);
    ListNode list1 = ListNode(1, &list0);
    ListNode list2 = ListNode(2, nullptr);
    ListNode list3 = ListNode(2, &list2);
    ListNode *res = sol.mergeTwoLists(&list1, &list3);
    cout << res->val << "\n";
    res = res->next;
    cout << res->val << "\n";
    res = res->next;
    cout << res->val << "\n";
    res = res->next;
    cout << res->val << "\n";
    res = res->next;
    cout << res->val << "\n";
    res = res->next;
    return 0;
}