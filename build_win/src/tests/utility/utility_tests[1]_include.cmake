if(EXISTS "C:/Users/aliem/Desktop/1/ce205-midterm-/build_win/src/tests/utility/utility_tests[1]_tests.cmake")
  include("C:/Users/aliem/Desktop/1/ce205-midterm-/build_win/src/tests/utility/utility_tests[1]_tests.cmake")
else()
  add_test(utility_tests_NOT_BUILT utility_tests_NOT_BUILT)
endif()
