/*~--------------------------------------------------------------------------~*
 * Copyright (c) 2014 Los Alamos National Security, LLC
 * All rights reserved.
 *~--------------------------------------------------------------------------~*/

#ifndef ourlib_utils_h
#define ourlib_utils_h

/*!
 * \file utils.h
 * \authors bergen
 * \date Initial file creation: Jul 09, 2015
 */

namespace ourlib {

/*!
    \class utils utils.h
    \brief utils provides...
 */
class utils
{
public:

    //! Default constructor
    utils() {}

    //! Copy constructor (disabled)
    utils(const utils &) = delete;

    //! Assignment operator (disabled)
    utils & operator = (const utils &) = delete;

    //! Destructor
     ~utils() {}

    static void print();

private:

}; // class utils

} // namespace ourlib

#endif // ourlib_utils_h

/*~-------------------------------------------------------------------------~-*
 * Formatting options for Emacs and vim.
 *
 * mode:c++
 * indent-tabs-mode:t
 * c-basic-offset:4
 * tab-width:4
 * vim: set tabstop=4 shiftwidth=4 expandtab :
 *~-------------------------------------------------------------------------~-*/
