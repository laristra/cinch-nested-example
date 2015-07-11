/*~-------------------------------------------------------------------------~~*
 * Copyright (c) 2014 Los Alamos National Security, LLC
 * All rights reserved.
 *~-------------------------------------------------------------------------~~*/

#include <iostream>
#include <example.h>
#include <print.h>
#include <upart.h>

int main(int argc, char ** argv) {

    mylib::example::print();
    ourlib::example<double>::print();

    std::cerr << util::times_two(2.0) << std::endl;

    return 0;
} // main

/*~------------------------------------------------------------------------~--*
 * vim: set tabstop=4 shiftwidth=4 expandtab :
 *~------------------------------------------------------------------------~--*/
