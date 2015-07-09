/*~--------------------------------------------------------------------------~*
 * Copyright (c) 2014 Los Alamos National Security, LLC
 * All rights reserved.
 *~--------------------------------------------------------------------------~*/

#ifndef Example_h
#define Example_h

/*!
 * \file Example.h
 * \authors bergen
 * \date Initial file creation: Jul 09, 2015
 */

/*!
    \class Example Example.h
    \brief Example provides...
 */
class Example
{
public:

    //! Default constructor
    Example() {}

    //! Copy constructor (disabled)
    Example(const Example &) = delete;

    //! Assignment operator (disabled)
    Example & operator = (const Example &) = delete;

    //! Destructor
     ~Example() {}

    void print();

private:

}; // class Example

#endif // Example_h

/*~-------------------------------------------------------------------------~-*
 * Formatting options for Emacs and vim.
 *
 * mode:c++
 * indent-tabs-mode:t
 * c-basic-offset:4
 * tab-width:4
 * vim: set tabstop=4 shiftwidth=4 expandtab :
 *~-------------------------------------------------------------------------~-*/
