#include <gtest/gtest.h>
#include "../include/Time.h"

TEST(TimeTest, Easy) {
    EXPECT_EQ(Time(9, 30, "am"), 930);
    EXPECT_EQ(Time(11, 45, "am"), 1145);
    EXPECT_EQ(Time(8, 0, "am"), 800);
}

TEST(TimeTest, SmallMin) {
    EXPECT_EQ(Time(9, 5, "am"), 905);
    EXPECT_EQ(Time(2, 7, "pm"), 1407);
}

TEST(TimeTest, Midtime) {
    EXPECT_EQ(Time(12, 0, "pm"), 1200);
    EXPECT_EQ(Time(12, 0, "am"), 0);
}

TEST(TimeTest, Latetime) {
    EXPECT_EQ(Time(8, 30, "pm"), 2030);
    EXPECT_EQ(Time(11, 59, "pm"), 2359);
}


