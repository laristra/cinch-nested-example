#~----------------------------------------------------------------------------~#
# Copyright (c) 2014 Los Alamos National Security, LLC
# All rights reserved.
#~----------------------------------------------------------------------------~#

# Add header files
set(utils_HEADERS
  utils.h
  PARENT_SCOPE
)

# Add source files
set(utils_SOURCES
  utils.cc
  PARENT_SCOPE
)

# Add unit test
#if(ENABLE_UNIT_TESTS)
#  cinch_add_unit(example_unit example_unit.cc)
#endif(ENABLE_UNIT_TESTS)

#~---------------------------------------------------------------------------~-#
# Formatting options for vim.
# vim: set tabstop=2 shiftwidth=2 expandtab :
#~---------------------------------------------------------------------------~-#
