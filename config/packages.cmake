#~----------------------------------------------------------------------------~#
# Copyright (c) 2014 Los Alamos National Security, LLC
# All rights reserved.
#~----------------------------------------------------------------------------~#

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

#~---------------------------------------------------------------------------~-#
# Formatting options for emacs and vim.
# vim: set tabstop=4 shiftwidth=4 expandtab :
#~---------------------------------------------------------------------------~-#
