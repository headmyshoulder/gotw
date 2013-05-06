/*
 * gotw_1.cpp
 * Date: 2013-05-06
 * Author: Karsten Ahnert (karsten.ahnert@gmx.de)
 */

#include <iostream>

#define tab "\t"

using namespace std;


int main( int argc , char *argv[] )
{
    cout << "Hello world!" << endl;
    return 0;
}

/*
widget w;                   // (a)

widget w();                 // (b)
widget w{};                 // (c)

widget w(x);                // (d)
widget w{x};                // (e)

widget w = x;               // (f)
widget w = {x};             // (g)

auto w = x;                 // (h)
auto w = widget{x};         // (i)

*/