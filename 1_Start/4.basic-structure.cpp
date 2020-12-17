#include <iostream>
// #include <> is a header file
// this improve our program functionality
// iostream help us to input & output

int main()
// int main is the entry point of the programme
{ // start function

    // we white code in hare

    std::cout << "Hello World";
    /* "std" a namespace. The "::" operator is the "scope" operator. It tells the compiler which class/namespace to look in for an identifier.

    So std::cout tells the compiler that you want the "cout" identifier, and that it is in the "std" namespace.

    If you just said cout then it will only look in the global namespace. Since cout isn't defined in the global namespace, it won't be able to find it, and it will give you an error.
    */

    return 0;
    // we have to always return an intiger
    // when we return 0 that means our programme is successfully completed.

} // close function