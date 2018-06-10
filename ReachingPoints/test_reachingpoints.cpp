#include "reachingpoints.h"
#include "gtest/gtest.h"

TEST(test_reachingpoints, test1)
{
    int sx = 1;
    int sy = 1;
    int tx = 3;
    int ty = 5;
    Solution s;
    EXPECT_EQ(true, s.reachingPoints(sx, sy, tx, ty));
}

TEST(test_reachingpoints, test2)
{
    int sx = 1;
    int sy = 1;
    int tx = 1;
    int ty = 1;
    Solution s;
    EXPECT_EQ(false, s.reachingPoints(sx, sy, tx, ty));
}
