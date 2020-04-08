#include "List.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(ListTest, ItShouldWork)
{
    List<float> testList;

    testList.pushBack(4.20);
    testList.pushBack(0.69);
    testList.pushBack(66.6);
    testList.size();
    ASSERT_EQ(testList.size(), 3);
}
