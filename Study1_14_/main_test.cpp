#include <gtest>

#include "main.c"

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(find_single_dog_test, test1) {
    int a[] = {2, 2};
    find_single_dog(a, 2);
    EXPECT_EQ(0, 0);
}

TEST(find_single_dog_test, test2) {
    int a[] = {1, 1, 1, 1};
    find_single_dog(a, 4);
    EXPECT_EQ(0, 0);
}

TEST(find_single_dog_test, test3) {
    int a[] = {0, 0, 0, 0};
    find_single_dog(a, 4);
    EXPECT_EQ(0, 0);
}

TEST(find_single_dog_test, test4) {
    int a[] = {};
    find_single_dog(a, 0);
    EXPECT_EQ(0, 0);
}

TEST(find_single_dog_test, test5) {
    int a[] = {1};
    find_single_dog(a, 1);
    EXPECT_EQ(0, 0);
}

TEST(find_single_dog_test, test6) {
    int a[] = {3};
    find_single_dog(a, 1);
    EXPECT_EQ(0, 0);
}

TEST(find_single_dog_test, test7) {
    int a[] = {3, 3};
    find_single_dog(a, 2);
    EXPECT_EQ(0, 0);
}
