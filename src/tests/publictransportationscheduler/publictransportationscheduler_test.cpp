//#define ENABLE_PUBLICTRANSPORTATIONSCHEDULER_TEST  // Uncomment this line to enable the PublicTransportationScheduler tests

#include "gtest/gtest.h"
#include "../../publictransportationscheduler/header/publictransportationscheduler.h"  // Adjust this include path based on your project structure

using namespace Coruh::PublicTransportationScheduler;

class PublicTransportationSchedulerTest : public ::testing::Test {
 protected:
  void SetUp() override {
    // Setup test data
  }

  void TearDown() override {
    // Clean up test data
  }
};

TEST_F(PublicTransportationSchedulerTest, TestAdd) {
  double result = PublicTransportationScheduler::add(5.0, 3.0);
  EXPECT_DOUBLE_EQ(result, 8.0);
}

TEST_F(PublicTransportationSchedulerTest, TestSubtract) {
  double result = PublicTransportationScheduler::subtract(5.0, 3.0);
  EXPECT_DOUBLE_EQ(result, 2.0);
}

TEST_F(PublicTransportationSchedulerTest, TestMultiply) {
  double result = PublicTransportationScheduler::multiply(5.0, 3.0);
  EXPECT_DOUBLE_EQ(result, 15.0);
}

TEST_F(PublicTransportationSchedulerTest, TestDivide) {
  double result = PublicTransportationScheduler::divide(6.0, 3.0);
  EXPECT_DOUBLE_EQ(result, 2.0);
}

TEST_F(PublicTransportationSchedulerTest, TestDivideByZero) {
  EXPECT_THROW(PublicTransportationScheduler::divide(5.0, 0.0), std::invalid_argument);
}

/**
 * @brief The main function of the test program.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of command-line argument strings.
 * @return int The exit status of the program.
 */
int main(int argc, char **argv) {
#ifdef ENABLE_PUBLICTRANSPORTATIONSCHEDULER_TEST
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
#else
  return 0;
#endif
}
