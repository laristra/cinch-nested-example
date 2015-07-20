#~----------------------------------------------------------------------------~#
# Copyright (c) 2014 Los Alamos National Security, LLC
# All rights reserved.
#~----------------------------------------------------------------------------~#

project(myproject)

#------------------------------------------------------------------------------#
# Set application directory
#------------------------------------------------------------------------------#

cinch_add_application_directory("app")

#------------------------------------------------------------------------------#
# Add library targets
#------------------------------------------------------------------------------#

cinch_add_library_target("mylib" "src/mylib")
cinch_add_library_target("ourlib" "src/ourlib")

#------------------------------------------------------------------------------#
# Add subprojects
#------------------------------------------------------------------------------#

# Select specific libraries from a subproject
cinch_add_subproject("ngclib" LIBRARIES "testlib")

# Select all libraries from a subproject
#cinch_add_subproject("ngclib")

#------------------------------------------------------------------------------#
# Set header suffix regular expression
#------------------------------------------------------------------------------#

set(CINCH_HEADER_SUFFIXES "\\.h|\\.hh")

#~---------------------------------------------------------------------------~-#
# Formatting options for emacs and vim.
# vim: set tabstop=4 shiftwidth=4 expandtab :
#~---------------------------------------------------------------------------~-#
