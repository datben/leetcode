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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *q = new ListNode(0);
        ListNode *curr = q;
        ListNode *last;

        int sum;
        while (l1 != nullptr || l2 != nullptr)
        {
            sum = curr->val;
            if (l1 != nullptr)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            curr->val = sum % 10;
            curr->next = new ListNode(sum / 10, nullptr);
            last = curr;
            curr = curr->next;
        }

        if (curr->val == 0)
        {
            last->next = nullptr;
        }

        return q;
    }
};

int main()
{
    Solution sol;
    ListNode list4 = ListNode(5, nullptr);
    ListNode list0 = ListNode(5, &list4);
    ListNode list1 = ListNode(1, &list0);
    ListNode list3 = ListNode(9, nullptr);
    ListNode *res = sol.addTwoNumbers(&list4, &list3);
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