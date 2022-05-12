# CMake generated Testfile for 
# Source directory: /home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation
# Build directory: /home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/home/eyusd/anaconda3/envs/ML/bin/python3" "-u" "/home/eyusd/ML/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/copyright.xunit.xml" "--package-name" "policy_translation" "--output-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/ament_copyright/copyright.txt" "--command" "/home/eyusd/ML/ros2-linux/bin/ament_copyright" "--xunit-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation")
add_test(cppcheck "/home/eyusd/anaconda3/envs/ML/bin/python3" "-u" "/home/eyusd/ML/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/cppcheck.xunit.xml" "--package-name" "policy_translation" "--output-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/ament_cppcheck/cppcheck.txt" "--command" "/home/eyusd/ML/ros2-linux/bin/ament_cppcheck" "--xunit-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/cppcheck.xunit.xml" "--include_dirs" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/rosidl_typesupport_c" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/rosidl_generator_cpp" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/rosidl_generator_c" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/rosidl_typesupport_connext_c" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/rosidl_typesupport_connext_cpp" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/rosidl_typesupport_fastrtps_c" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/rosidl_typesupport_fastrtps_cpp" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/rosidl_typesupport_introspection_c" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/rosidl_typesupport_opensplice_c" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/rosidl_typesupport_opensplice_cpp" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/rosidl_generator_py")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation")
add_test(cpplint "/home/eyusd/anaconda3/envs/ML/bin/python3" "-u" "/home/eyusd/ML/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/cpplint.xunit.xml" "--package-name" "policy_translation" "--output-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/ament_cpplint/cpplint.txt" "--command" "/home/eyusd/ML/ros2-linux/bin/ament_cpplint" "--xunit-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation")
add_test(flake8 "/home/eyusd/anaconda3/envs/ML/bin/python3" "-u" "/home/eyusd/ML/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/flake8.xunit.xml" "--package-name" "policy_translation" "--output-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/ament_flake8/flake8.txt" "--command" "/home/eyusd/ML/ros2-linux/bin/ament_flake8" "--xunit-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation")
add_test(lint_cmake "/home/eyusd/anaconda3/envs/ML/bin/python3" "-u" "/home/eyusd/ML/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/lint_cmake.xunit.xml" "--package-name" "policy_translation" "--output-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/ament_lint_cmake/lint_cmake.txt" "--command" "/home/eyusd/ML/ros2-linux/bin/ament_lint_cmake" "--xunit-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation")
add_test(pep257 "/home/eyusd/anaconda3/envs/ML/bin/python3" "-u" "/home/eyusd/ML/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/pep257.xunit.xml" "--package-name" "policy_translation" "--output-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/ament_pep257/pep257.txt" "--command" "/home/eyusd/ML/ros2-linux/bin/ament_pep257" "--xunit-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation")
add_test(uncrustify "/home/eyusd/anaconda3/envs/ML/bin/python3" "-u" "/home/eyusd/ML/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/uncrustify.xunit.xml" "--package-name" "policy_translation" "--output-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/ament_uncrustify/uncrustify.txt" "--command" "/home/eyusd/ML/ros2-linux/bin/ament_uncrustify" "--xunit-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation")
add_test(xmllint "/home/eyusd/anaconda3/envs/ML/bin/python3" "-u" "/home/eyusd/ML/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/xmllint.xunit.xml" "--package-name" "policy_translation" "--output-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/ament_xmllint/xmllint.txt" "--command" "/home/eyusd/ML/ros2-linux/bin/ament_xmllint" "--xunit-file" "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation/test_results/policy_translation/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/eyusd/ML/LanguagePolicies/ros2/src/policy_translation")
subdirs("policy_translation__py")