#include <iostream>
#include <stdlib.h>   /* srand, rand*/
#include <time.h>     /* time */
#include <typeinfo>  /* typeid */

using namespace std;

int main(int argc, char *argv[])
{
    int guessNumber, secretNumber;
    /*
     * srand(x)  used to set the starting value (seed) for generating a sequence of pseudo-random integer values.
     * The srand(x) function sets the seed of the random number generator algorithm used by the function rand( ).  A
     * seed value of 1 is the default setting yielding the same sequence of values as if srand(x) were not used.
     * Any other value for the seed produces a different sequence.
     *
     *
     * srand(time(NULL));
     * makes use of the computer's internal clock to control the choice of the seed.  Since time is continually
     * changing, the seed is forever changing.  Remember, if the seed number remains the same, the sequence of
     * numbers will be repeated for each run of the program.
     *
     * enerating random numbers within a specified range:
     * In order to produce random integer numbers within a specified range, you need to manipulate the rand( )
     * function.
     * The formula is:
     * int number = a + rand( ) % n;
     * a = the first number in your range
     * n = the number of terms in your range
     * (range computed by  largest value - smallest value + 1)
     *
     */
    srand(time(NULL));  // initialize the random number

    // generate rand number
    secretNumber = rand() % 10 + 1;    // generate rand num between 1 to 10

    // ask player to guess
    cout << "Guess the number?  1 - 10 " << endl;

    do
    {
        cin >> guessNumber;
        if ((guessNumber < secretNumber)  && (typeid(guessNumber) == typeid(int)))
        {
            cout << "number is lower" << endl;
        }
        else if ((guessNumber > secretNumber) && (typeid(guessNumber) == typeid(int)))
        {
            cout << "the number is higher" << endl;
        }
        else if(typeid(guessNumber) == typeid(char))
        {
            cout << "wrong content" << endl;
        }
        else
        {
            cout << "nah you" << endl;
        }


    }while (guessNumber != secretNumber);

    cout << "Grats, you hit the number!!!    " <<  guessNumber << endl;


    return 0;
}
