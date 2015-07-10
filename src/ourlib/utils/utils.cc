/*~-------------------------------------------------------------------------~~*
 * Copyright (c) 2014 Los Alamos National Security, LLC
 * All rights reserved.
 *~-------------------------------------------------------------------------~~*/

/*!
 * \file utils.h
 * \authors bergen
 * \date Initial file creation: Jul 09, 2015
 */

#include <iostream>
#include "utils.h"

namespace ourlib {

void utils::print()
{
    std::cerr << "Hello Beula" << std::endl;
} // utils::print

} // namespace

/*~------------------------------------------------------------------------~--*
 * Formatting options for Emacs and vim.
 *
 * mode:c++
 * indent-tabs-mode:t
 * c-basic-offset:4
 * tab-width:4
 * vim: set tabstop=4 shiftwidth=4 expandtab :
 *~------------------------------------------------------------------------~--*/
