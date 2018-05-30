#ifndef ADDTWONUMBER_H
#define ADDTWONUMBER_H

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x)
        : val(x)
        , next(nullptr)
    {
    }
};

class AddTwoNumber {
public:
    AddTwoNumber();

    //    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    //    {
    //        ListNode* previous = nullptr;
    //        int jinwei = 0;
    //        while (l1 != nullptr || l2 != nullptr || jinwei != 0) {
    //            int rl1value = 0;
    //            if (l1 != nullptr) {
    //                rl1value = l1->val;
    //            }
    //            int rl2value = 0;
    //            if (l2 != nullptr) {
    //                rl2value = l2->val;
    //            }
    //            int sum = rl1value + rl2value + jinwei;
    //            if (sum >= 10) {
    //                sum %= 10;
    //                jinwei = 1;
    //            } else {
    //                jinwei = 0;
    //            }
    //            ListNode* newNode = new ListNode(sum);
    //            newNode->next = previous;
    //            previous = newNode;
    //            if (l1 != nullptr)
    //                l1 = l1->next;
    //            if (l2 != nullptr)
    //                l2 = l2->next;
    //        }
    //        return reverseList(previous);
    //    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* previous = l1;
        int jinwei = 0;
        while (l1 != nullptr || l2 != nullptr || jinwei != 0) {
            int rl1value = 0;
            if (l1 != nullptr) {
                rl1value = l1->val;
            }
            int rl2value = 0;
            if (l2 != nullptr) {
                rl2value = l2->val;
            }
            int sum = rl1value + rl2value + jinwei;
            if (sum >= 10) {
                sum %= 10;
                jinwei = 1;
            } else {
                jinwei = 0;
            }
            if (l1->next == nullptr && l2->next != nullptr) {
                l1->next = l2->next;
                l2->next = nullptr;
            }
            if (l1->next == nullptr && l2->next == nullptr && jinwei != 0) {
                l1->next = new ListNode(jinwei);
                jinwei = 0;
                break;
            }
            l1->val = sum;

            if (l1 != nullptr)
                l1 = l1->next;
            if (l2 != nullptr)
                l2 = l2->next;
        }
        return previous;
    }
    ListNode* reverseList(ListNode* l)
    {
        ListNode* previous = nullptr;
        while (l != nullptr) {
            ListNode* newNode = new ListNode(l->val);
            newNode->next = previous;
            previous = newNode;
            l = l->next;
        }
        return previous;
    }
};

#endif // ADDTWONUMBER_H
