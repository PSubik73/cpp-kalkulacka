#include <gtest/gtest.h>

TEST(CalculatorTest, DivisionByZero) {
    // Tento test očakáva, že aplikácia nespadne, ale ona spadne (Crash)
    EXPECT_EQ(divide(10, 2), 5);
    EXPECT_EQ(divide(10, 0), 0); // Tu program padne
}
