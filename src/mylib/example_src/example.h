/*~--------------------------------------------------------------------------~*
 * Copyright (c) 2014 Los Alamos National Security, LLC
 * All rights reserved.
 *~--------------------------------------------------------------------------~*/

#ifndef mylib_example_h
#define mylib_example_h

/*!
 * \file example.h
 * \authors bergen
 * \date Initial file creation: Jul 09, 2015
 */

namespace mylib {

/*!
    \class example example.h
    \brief example provides...
 */
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

    static void print();

private:

}; // class example

} // namespace mylib

#endif // mylib_example_h

/*~-------------------------------------------------------------------------~-*
 * Formatting options for Emacs and vim.
 *
 * mode:c++
 * indent-tabs-mode:t
 * c-basic-offset:4
 * tab-width:4
 * vim: set tabstop=4 shiftwidth=4 expandtab :
 *~-------------------------------------------------------------------------~-*/
