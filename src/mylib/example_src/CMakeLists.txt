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
  cinch_add_unit(example_unit SOURCES example_unit.cc)
endif(ENABLE_UNIT_TESTS)

#~---------------------------------------------------------------------------~-#
# Formatting options for vim.
# vim: set tabstop=2 shiftwidth=2 expandtab :
#~---------------------------------------------------------------------------~-#
