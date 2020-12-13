# CMake generated Testfile for 
# Source directory: /home/orthrus1-1/orthrus1-1/src/message
# Build directory: /home/orthrus1-1/orthrus1-1/build/message
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/orthrus1-1/orthrus1-1/build/message/test_results/message/lint_cmake.xunit.xml" "--package-name" "message" "--output-file" "/home/orthrus1-1/orthrus1-1/build/message/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/home/orthrus1-1/orthrus1-1/build/message/test_results/message/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/orthrus1-1/orthrus1-1/src/message")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/orthrus1-1/orthrus1-1/build/message/test_results/message/xmllint.xunit.xml" "--package-name" "message" "--output-file" "/home/orthrus1-1/orthrus1-1/build/message/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/home/orthrus1-1/orthrus1-1/build/message/test_results/message/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/orthrus1-1/orthrus1-1/src/message")
subdirs("message__py")
