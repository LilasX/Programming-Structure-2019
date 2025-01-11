/*
    For this program I will be using Canadian dollars and cents.

    Write a program that asks the user to enter the following:
    An integer representing the number of cents

    You may assume that the number of cents entered is greater than or equal to zero

    The program should then display how to provide that change to the user.

    In Canada:
        1 dollar is 100 cents
        1 quarter is 25 cents
        1 dime is 10 cents
        1 nickel is 5 cents, and
        1 penny is 1 cent.

    Here is a sample run:

    Enter an amount in cents :  92

    You can provide this change as follows:
    dollars    : 0
    quarters : 3
    dimes     : 1
    nickels   : 1
    pennies  : 2

    Also, think of how you might solve the problem using the modulo operator.


*/

#include <iostream>

using namespace std;

int main()
{

    int cents{ 0 };
    int cents2{ 0 };
    int dollars{ 0 };
    int penny{ 0 };
    int quarter{ 0 };
    int dime{ 0 };
    int nickel{ 0 };


    cout << "Enter an amount in cents: ";
    cin >> cents;
    cout << endl;
    cents2 = cents;
    if (cents >= 0)
    {
        cout << "You can provide this change as follows: " << endl;

    }

    if (cents >= 100)
    {
        dollars = cents / 100;
        cents = (cents - (100 * dollars));
        if (dollars > 0)
        {
            cout << "dollars: " << dollars << endl;
        }
    }
    else
    {
        dollars = 0;
        cout << "dollars: " << dollars << endl;
    }

    if (cents >= 25)
    {
        quarter = cents / 25;
        cents = (cents - (25 * quarter));
        if (quarter > 0)
        {
            cout << "quarters: " << quarter << endl;
        }


    }
    else
    {
        quarter = 0;
        cout << "quarters: " << quarter << endl;
    }
    if (cents >= 10)
    {
        dime = (cents / 10);
        cents = (cents - (10 * dime));
        if (dime > 0)
        {
            cout << "dimes: " << dime << endl;
        }
    }
    else
    {
        dime = 0;
        cout << "dimes: " << dime << endl;
    }
    if (cents >= 5)
    {
        nickel = (cents / 5);
        cents = (cents - (5 * nickel));
        if (nickel > 0)
        {
            cout << "nickels: " << nickel << endl;
        }
    }

    else
    {
        nickel = 0;
        cout << "nickels: " << nickel << endl;
    }

    if (cents >= 1)
    {
        penny = (cents / 1);
        cents = (cents - (1 * penny));
        if (penny > 0)
        {
            cout << "pennies: " << penny << endl;
        }
    }

    else
    {
        penny = 0;
        cout << "pennies: " << penny << endl;
    }

    cout << endl;
    cout << "=================================================================================================================" << endl;
    cout << "Solution using the modulo operator" << endl;
    cout << "=================================================================================================================" << endl;
    cout << endl;

    if (cents2 >= 0)
    {
        cout << "You can provide this change as follows: " << endl;

    }

    if (cents2 >= 100)
    {
        dollars = cents2 / 100;
        cents2 = cents2 % 100;
        if (dollars > 0)
        {
            cout << "dollars: " << dollars << endl;
        }
    }
    else
    {
        dollars = 0;
        cout << "dollars: " << dollars << endl;
    }

    if (cents2 >= 25)
    {
        quarter = cents2 / 25;
        cents2 = cents2 % 25;
        if (quarter > 0)
        {
            cout << "quarters: " << quarter << endl;
        }

    }

    else
    {
        quarter = 0;
        cout << "quarters: " << quarter << endl;
    }

    if (cents2 >= 10)
    {
        dime = (cents2 / 10);
        cents2 = cents2 % 10;
        if (dime > 0)
        {
            cout << "dimes: " << dime << endl;
        }
    }

    else
    {
        dime = 0;
        cout << "dimes: " << dime << endl;
    }

    if (cents2 >= 5)
    {
        nickel = (cents2 / 5);
        cents2 = cents2 % 5;
        if (nickel > 0)
        {
            cout << "nickels: " << nickel << endl;
        }
    }

    else
    {
        nickel = 0;
        cout << "nickels: " << nickel << endl;
    }

    if (cents2 >= 1)
    {
        penny = (cents2 / 1);
        cents2 = cents2 % 1;
        if (penny > 0)
        {
            cout << "pennies: " << penny << endl;
        }
    }

    else
    {
        penny = 0;
        cout << "pennies: " << penny << endl;

    }
    cout << endl;
    return 0;
}