#include <gtest/gtest.h>
#include "./monitor.h"

TEST(Monitor, NotOkWhenAnyVitalIsOffRange) {
  ASSERT_FALSE(vitalsOk(99, 102, 70));
  ASSERT_TRUE(vitalsOk(98.1, 70, 98));
}
TEST(Monitor, NotOkWhenAnyVitalIsWithiNRange) {
  ASSERT_FALSE(vitalsOk(99, 100, 70));
  ASSERT_TRUE(vitalsOk(98, 70, 98));
}
