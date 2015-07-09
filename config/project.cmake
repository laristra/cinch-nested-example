#~----------------------------------------------------------------------------~#
# Copyright (c) 2014 Los Alamos National Security, LLC
# All rights reserved.
#~----------------------------------------------------------------------------~#

project(myproject)

set(CINCH_APPLICATION_DIRECTORY "app")
cinch_add_library_target("mylib" "src/mylib")
set(CINCH_CONFIG_SUBPROJECTS "")

#~---------------------------------------------------------------------------~-#
# Formatting options for emacs and vim.
# vim: set tabstop=4 shiftwidth=4 expandtab :
#~---------------------------------------------------------------------------~-#
