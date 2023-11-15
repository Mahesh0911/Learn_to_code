#include <iostream>
using namespace std;
// C++ exception handling is built upon three keywords: 'try', 'catch', and 'throw'

/*
program statements that you want to monitor for exceptions are contained in a try block.
If an exception (i.e., an error) occurs within the try block,
it is thrown (using throw). The exception is caught, using catch, and processed.
*/

void Xhandler(int test)
{
    try
    {
        if (test)
        {
            throw test;
        }
        else
        {
            throw "Value is zero.";
        }
    }
    catch (int t)
    {
        cout << "Caught Exception : #" << t << endl;
    }
    catch (const char *st)
    {
        cout << "Caught a string : #" << st << endl;
    }
}
int main(int argc, char const *argv[])
{

    // try
    // {
    //     throw 100; // throws to the catch block
    // }
    // catch (...)    // (...) :- catches all type of exceptions
    // {
    //     cout << "Inside the catch block :" << i << endl;
    // }
    // catch (int i)   // only catches the int exceptions
    // {
    //     cout << "Inside the catch block :" << i << endl;
    // }

    Xhandler(2);
    Xhandler(1);
    Xhandler(0);
    Xhandler(3);
    return 0;
}

/*
'terminate( )' function is called whenever the exception handling subsystem fails
to find a matching catch statement for an exception.

'terminate( )' is the handler of last resort when no other handlers
for an exception are available. By default, terminate( ) calls 'abort( )' .

*/