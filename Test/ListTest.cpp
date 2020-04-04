#include "Card.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(SizeTest, ItShouldReturnWork)
{
  List testlist;

  List<float> list1;
  testlist.pushBack(0.420);
  testlist.pushBack(6.9);
  testlist.pushBack(420.69);
  testlist.pushBack(66.6);
  testlist.pushBack(88.0);
  testlist.pushBack(7.77);
  testlist.size();
  ASSERT_EQ(size = 6);
}
