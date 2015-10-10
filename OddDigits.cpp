/*
 * Code Eval Challenge: Odd Numbers
 * Prints out the odd numbers from 1 to 99
 */

#include <iostream>

int main()
{
    const unsigned int MAX = 100;

    unsigned int index = 0;

    while(index < MAX)
    {
        if(index % 2 != 0)
        {
            std::cout << index << std::endl;
        }

        ++index;
    }

    return 0;
}
