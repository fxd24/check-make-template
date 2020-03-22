#include <check.h>
#include <stdio.h>
#include <stdlib.h>
/*
*   Here you can include header files with the tests
*   i.e. #include "test_example.h" Lieb
*/
// INSERT HERE
#include "test_example.h" 


Suite* main_suite(){
    Suite *s;
    TCase *tc;

    s = suite_create("Example suite");
    tc = tcase_create("Example Test Case");
    /*
    *   Here you can add other test cases
    *   i.e. tcase_add_test(<TEST CASE INSTANCE HERE>, <TEST NAME GOES HERE>);
    */
    // INSERT HERE 
    tcase_add_test(tc, test_sample);
    /************************************/
    suite_add_tcase(s, tc);
    return s;
}

int main(){
    int number_failed;
    SRunner *sr;

    
    sr = srunner_create(main_suite());

    printf("Hello\n");

    srunner_set_fork_status(sr, CK_NOFORK);
    /*
    *   Here you can add other runners
    *   i.e. srunner_add_suite (sr, <SUITE GOES HERE>);
    */
    // INSERT HERE

    /************************************/
    srunner_set_log (sr, "test.log");
    srunner_set_xml (sr, "test.xml");
    srunner_run_all(sr, CK_VERBOSE);

    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}