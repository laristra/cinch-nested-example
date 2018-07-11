#~----------------------------------------------------------------------------~#
# Copyright (c) 2014 Los Alamos National Security, LLC
# All rights reserved.
#~----------------------------------------------------------------------------~#

cinch_minimum_required(2.0)

project(myproject)

#------------------------------------------------------------------------------#
# If a C++11 compiler is available, then set the appropriate flags
#------------------------------------------------------------------------------#

include(cxx11)

check_for_cxx11_compiler(CXX11_COMPILER)

if(CXX11_COMPILER)
    enable_cxx11()
else()
    message(FATAL_ERROR "C++11 compatible compiler not found")
endif()

#------------------------------------------------------------------------------#
# Enable Fortran
#------------------------------------------------------------------------------#

enable_language(Fortran)

#------------------------------------------------------------------------------#
# Set header suffix regular expression
#------------------------------------------------------------------------------#

set(CINCH_HEADER_SUFFIXES "\\.h|\\.hh")

#------------------------------------------------------------------------------#
# Automatic version creation.
#------------------------------------------------------------------------------#

include(version)

#------------------------------------------------------------------------------#
# Add user guide target
#------------------------------------------------------------------------------#

cinch_add_doc(nested-ug ugconfig.py src
    nested-ug-${${PROJECT_NAME}_VERSION}.pdf)

#------------------------------------------------------------------------------#
# load cinch extras
#------------------------------------------------------------------------------#

cinch_load_extras()

#------------------------------------------------------------------------------#
# Add library targets
#------------------------------------------------------------------------------#

cinch_add_library_target(mylib src/mylib)
cinch_add_library_target(ourlib src/ourlib)

#------------------------------------------------------------------------------#
# Add subprojects
#------------------------------------------------------------------------------#

# Select specific libraries from a subproject
cinch_add_subproject("simple")

# Select all libraries from a subproject
#cinch_add_subproject("ngclib")

#------------------------------------------------------------------------------#
# Set application directory
#------------------------------------------------------------------------------#

cinch_add_application_directory("app")

#~---------------------------------------------------------------------------~-#
# Formatting options for emacs and vim.
# vim: set tabstop=4 shiftwidth=4 expandtab :
#~---------------------------------------------------------------------------~-#
