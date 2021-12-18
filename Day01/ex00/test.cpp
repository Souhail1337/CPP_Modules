#include <iostream>
#include <iomanip>



int main()
{
    int     test = 72;
    int*    balstest = &test;
    int&    reftest = test;

    std::cout << " " << test << " " << *balstest << " " << reftest << std::endl;
    *balstest  = 21;
    std::cout << test << std::endl;
    reftest = 84;
    std::cout << test << std::endl;
    return (0);
}
