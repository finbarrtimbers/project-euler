#include <gtest/gtest.h>
#include "1-10.h"

TEST(project_euler_tests, problem_1){
    EXPECT_EQ(problem_1(0), 0);
    EXPECT_EQ(problem_1(10), 23);
    EXPECT_EQ(problem_1(12), 33);
    EXPECT_EQ(problem_1(15), 45);
}

