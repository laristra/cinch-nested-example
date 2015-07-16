/*~--------------------------------------------------------------------------~*
 * Copyright (c) 2014 Los Alamos National Security, LLC
 * All rights reserved.
 *~--------------------------------------------------------------------------~*/

#ifndef ourlib_print_h
#define ourlib_print_h

#include <iostream>

#include <testlib/util/upart.h>

/*!
 * \file example.h
 * \authors bergen
 * \date Initial file creation: Jul 09, 2015
 */

namespace ourlib {

/*!
    \class example example.h
    \brief example provides...
 */
template<typename T>
class example
{
public:

    //! Default constructor
    example() {}

    //! Copy constructor (disabled)
    example(const example &) = delete;

    //! Assignment operator (disabled)
    example & operator = (const example &) = delete;

    //! Destructor
     ~example() {}

    static void print() {
        std::cerr << "Hello Mars!" << std::endl;
        std::cerr << "Hello testlib! " << util::times_two(6.0) << std::endl;
    } // print

private:

}; // class example

} // namespace ourlib

#endif // ourlib_print_h

/*~-------------------------------------------------------------------------~-*
 * Formatting options for Emacs and vim.
 *
 * mode:c++
 * indent-tabs-mode:t
 * c-basic-offset:4
 * tab-width:4
 * vim: set tabstop=4 shiftwidth=4 expandtab :
 *~-------------------------------------------------------------------------~-*/
