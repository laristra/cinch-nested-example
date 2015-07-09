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

#if 0
    // This is an example of defining a method with Doxygen
    // documentation.  You should delete this example if
    // you don't need it.  Please remove or edit this section
    // before you add the file to a merge request.

    /*!
        \brief This method does...

        \param arg0 a value that I pass in...
        \param arg1 a value that I pass in...

        \return an integer with...

        This method does something useful...
     */
    int methodA(double arg0, double arg1) {
        return 0;
    } // methodA
#endif // if 0

private:

    // Aggregate data members
#if 0
    // This is an example data member.  You should delete
    // this definition.
    double val_;
#endif // if 0

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