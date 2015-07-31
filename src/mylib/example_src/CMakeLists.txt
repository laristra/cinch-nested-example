#~----------------------------------------------------------------------------~#
# Copyright (c) 2014 Los Alamos National Security, LLC
# All rights reserved.
#~----------------------------------------------------------------------------~#

# Add header files
set(example_src_HEADERS
  example.h
  PARENT_SCOPE
)

# Add source files
set(example_src_SOURCES
  example.cc
  PARENT_SCOPE
)

# Add unit test
if(ENABLE_UNIT_TESTS)
  cinch_add_unit(example_unit
    SOURCES test/example_unit.cc
    LIBRARIES mylib)
endif(ENABLE_UNIT_TESTS)
#if(ENABLE_UNIT_TESTS)
#  cinch_add_unit(example_unit
#    SOURCES test/example_unit.cc
#    LIBRARIES mylib
#    EXECUTION_POLICY parallel
#    THREADS 1 2 4 256)
#endif(ENABLE_UNIT_TESTS)

#~---------------------------------------------------------------------------~-#
# Formatting options for vim.
# vim: set tabstop=2 shiftwidth=2 expandtab :
#~---------------------------------------------------------------------------~-#
