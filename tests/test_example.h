#include "../src/vec.c"
/*
*   Here we put all our test cases
*   START_TEST(<TEST NAME>) {
*       <TEST FUNCTION GIVEN BY CHECK>(<FUNCTION TO TEST>, <EXPECTED RESUL>);
*       //i.e. ck_assert_str_eq(sayHello(), "Hello");
*   }
*   END_TEST
*
*/

START_TEST(test_sample) {
  Vector3 output = {0.,0.,0.};
  Vector3 input = new_vector(0,0,0);
  ck_assert_int_eq(input.x, output.x);
  ck_assert_int_eq(input.y, output.y);
  ck_assert_int_eq(input.z, output.z);
}
END_TEST