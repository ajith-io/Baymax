#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include "../inc/user.h"
#include "../inc/bmi_calculator.h"
#include "../inc/weight_status.h"
#include "../inc/workout_plan.h"
/* Modify these two lines according to the project */

#define PROJECT_NAME    "Baymax - Your Personal health coach"

/* Prototypes for all the test functions */
void test_bmi_calculator_US(void);
void test_bmi_calculator_Metric(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_bmi_calculator_US);
  RUN_TEST(test_bmi_calculator_Metric);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_bmi_calculator_US(void) {
    User_info User1 = {"Ajith",6,165,74};
    User_info User2 = {"Htija",6,74840,188};
  TEST_ASSERT_EQUAL(21.182, bmi_calculator_Us(User1.user_height, User1.user_weight));
}

void test_bmi_calculator_Metric(void) {
    
    User_info User2 = {"Htija",6,74840,188};
  TEST_ASSERT_EQUAL(21.182, bmi_calculator_Metric(User2.user_height, User2.user_weight));

}





