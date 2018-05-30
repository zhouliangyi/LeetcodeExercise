#include "addtwonumber/addtwonumber.h"
#include "gtest/gtest.h"

TEST(test_addtwonumber, List_2_4_3And5_6_4)
{
    ListNode* node1 = new ListNode(2);
    ListNode* node2 = new ListNode(4);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(5);
    ListNode* node5 = new ListNode(6);
    ListNode* node6 = new ListNode(4);
    node1->next = node2;
    node2->next = node3;
    node4->next = node5;
    node5->next = node6;
    AddTwoNumber add;
    ListNode* node = add.addTwoNumbers(node1, node4);
    EXPECT_EQ(node->val, 7);
    EXPECT_EQ(node->next->val, 0);
    EXPECT_EQ(node->next->next->val, 8);
}
