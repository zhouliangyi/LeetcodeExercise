#include "rangemodule.h"
#include "gtest/gtest.h"

//// 左in 右out
//TEST(test_rangemodule, add_left_in_right_out)
//{
//    RangeModule r;
//    r.range = std::vector<RangeModule::item>{ RangeModule::item(10, true), RangeModule::item(20, false) };
//    auto ans = std::vector<RangeModule::item>{ RangeModule::item(10, true), RangeModule::item(22, false) };
//    r.addRange(15, 22);
//    auto res = r.range;
//    EXPECT_EQ(ans, res);
//}

//// 左out 右out
//TEST(test_rangemodule, add_left_out_right_out)
//{
//    RangeModule r;
//    r.range = std::vector<RangeModule::item>{ RangeModule::item(10, true), RangeModule::item(13, false) };

//    auto ans = std::vector<RangeModule::item>{
//        RangeModule::item(10, true),
//        RangeModule::item(13, false),
//        RangeModule::item(15, true),
//        RangeModule::item(22, false)
//    };
//    r.addRange(15, 22);
//    auto res = r.range;
//    EXPECT_EQ(ans, res);
//}

//// 左in 右out 相等
//TEST(test_rangemodule, add_left_in_right_EqualOut)
//{
//    RangeModule r;
//    r.range = std::vector<RangeModule::item>{ RangeModule::item(10, true), RangeModule::item(13, false) };
//    auto ans = std::vector<RangeModule::item>{ RangeModule::item(10, true), RangeModule::item(21, false) };
//    r.addRange(13, 21);
//    auto res = r.range;
//    EXPECT_EQ(ans, res);
//}

//// 左in 右in
//TEST(test_rangemodule, add_left_in_right_in)
//{
//    RangeModule r;
//    r.range = std::vector<RangeModule::item>{
//        RangeModule::item(1, true),
//        RangeModule::item(9, false),
//        RangeModule::item(15, true),
//        RangeModule::item(20, false)
//    };
//    auto ans = std::vector<RangeModule::item>{ RangeModule::item(1, true), RangeModule::item(20, false) };
//    r.addRange(5, 18);
//    auto res = r.range;
//    EXPECT_EQ(ans, res);
//}

//// 左in 右out
//TEST(test_rangemodule, add_left_in_right_out1)
//{
//    RangeModule r;
//    r.range = std::vector<RangeModule::item>{ RangeModule::item(10, true), RangeModule::item(20, false) };
//    auto ans = std::vector<RangeModule::item>{ RangeModule::item(10, true), RangeModule::item(22, false) };
//    r.addRange(10, 22);
//    auto res = r.range;
//    EXPECT_EQ(ans, res);
//}

//TODO 后续完善
//////////////////////////////////////////////////////
//TEST(test_rangemodule, query1)
//{
//    RangeModule r;
//    r.range = std::vector<int>{ 10, 14, 16, 20 };
//    //r.queryRange(10,14);

//    EXPECT_EQ(true, r.queryRange(10, 14));
//}

//#include "rangemodule.h"
//#include "gtest/gtest.h"

//// 左in 右out
//TEST(test_rangemodule, add_left_in_right_out)
//{
//    RangeModule r;
//    r.range = std::vector<int>{ 10, 20 };
//    std::vector<int> ans{ 10, 22 };
//    r.addRange(15, 22);
//    std::vector<int> res = r.range;
//    EXPECT_EQ(ans, res);
//}

//// 左out 右out
//TEST(test_rangemodule, add_left_out_right_out)
//{
//    RangeModule r;
//    r.range = std::vector<int>{ 10, 13 };
//    std::vector<int> ans{ 10, 13, 15, 22 };
//    r.addRange(15, 22);
//    std::vector<int> res = r.range;
//    EXPECT_EQ(ans, res);
//}

//// 左in 右out 相等
//TEST(test_rangemodule, add_left_in_right_EqualOut)
//{
//    RangeModule r;
//    r.range = std::vector<int>{ 10, 13 };
//    std::vector<int> ans{ 10, 21 };
//    r.addRange(13, 21);
//    std::vector<int> res = r.range;
//    EXPECT_EQ(ans, res);
//}

//// 左in 右in
//TEST(test_rangemodule, add_left_in_right_in)
//{
//    RangeModule r;
//    r.range = std::vector<int>{ 1, 9, 15, 20 };
//    std::vector<int> ans{ 1, 20 };
//    r.addRange(5, 18);
//    std::vector<int> res = r.range;
//    EXPECT_EQ(ans, res);
//}

//// 左in 右out
//TEST(test_rangemodule, add_left_in_right_out1)
//{
//    RangeModule r;
//    r.range = std::vector<int>{ 10, 20 };
//    std::vector<int> ans{ 10, 22 };
//    r.addRange(10, 22);
//    std::vector<int> res = r.range;
//    EXPECT_EQ(ans, res);
//}

//TEST(test_rangemodule, query1)
//{
//    RangeModule r;
//    r.range = std::vector<int>{ 10, 14, 16, 20 };
//    //r.queryRange(10,14);

//    EXPECT_EQ(true, r.queryRange(10, 14));
//}
