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

if(ENABLE_UNIT_TESTS)

  cinch_add_unit(example_unit
    SOURCES test/example_unit.cc
    LIBRARIES mylib
    POLICY MPI
    THREADS 1 2 4)

  cinch_add_unit(io
    SOURCES test/io.cc
    INPUTS test/io.blessed)

endif(ENABLE_UNIT_TESTS)

#~---------------------------------------------------------------------------~-#
# Formatting options for vim.
# vim: set tabstop=2 shiftwidth=2 expandtab :
#~---------------------------------------------------------------------------~-#
