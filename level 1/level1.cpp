//
//  main.cpp
//  helloworld
//
//  Created by lauwo on 7/8/2020.
//

/*1.1----------------------------------------
//let compiler read syntax in c++
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "My first C-program\nis a fact!\nGood, isn’t it?";
    return 0;
}

//let compiler read syntax in c (printf)
#include <stdio.h>
int main()
{
printf("This is one line of text\n");
}
*/

/*1.2---------------------------------------
// TestDataTypes.cpp
//
// Initial encounters with basic data types. Note that we use C++ iostream
// library for I/O operations.
//
// You get an idea of data types and their limits.
//
// DJD

#include <limits.h> // Least and greatest representation of integer types
#include <float.h>    // Least and greatest representation of floating point types
#include <iostream>
using namespace std;

int main()
{

    // Create some variables and their values
    int i = 42;
    long index = 0L;
    
    double d1 = 2564.45677;
    double d2 = 3.1415*d1;

    cout << "Values: " << i << ", " << index << ", " << d2 << ", " << d2*i << endl;

    // Some limits of basic data types
    cout << "int characteristics: " << sizeof(int) << ", " << INT_MIN << ", " << INT_MAX << endl;
    cout << "long characteristics: " << sizeof(long) << ", " << LONG_MIN << ", " << LONG_MAX << endl;

    cout << "double characteristics: " << sizeof(double) << ", " << DBL_MIN << ", " << DBL_MAX << endl;
    cout << "Long double characteristics: " << sizeof(double) << ", " << LDBL_MIN << ", " << LDBL_MAX << endl;
    cout << "float characteristics: " << sizeof(float) << ", " << FLT_MIN << ", " << FLT_MAX << endl;

    // What happens here? Put a big number in too small a space..
    float f = FLT_MAX;
    cout << f;


    return 0;
}
*/

/*1.3----------------------------
//conversion of float and double
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
double d1 = 1.004; double d2 = 1.00004e+3; float f1, f2;
int i1, i2;
f1 = d1; //double(d1) converted to float
f2 = d2;
i1 = d1;
i2 = d2;
printf("Assigning float to 1.004 is %f\n", f1);
printf("Assigning float to 1.00004e+3 is %f\n", f2);
printf("Assigning int to 1.004 is %d\n", i1);
printf("Assigning int to 1.00004e+3 is %d\n", i2); }

//++i vs i++
#include <iostream>
int main()
{
    int a = 11;
    int b = a++;                 //if use b=++a, b=12 as result
    std::cout << a << std::endl;
    std::cout << b << std::endl; //b=11, created a extra copy
}
*/

/*1.4-----------------------
 //do while
#include <iostream>
int main()
{
    int a;
    a=15;
    do {a--; } while (a >10);
    std::cout << a << std::endl;
}
 */

/*1.5-------------------
#include <iostream>
int fab(int a)
{
    if (a==0) {return 0;}
    if (a==1) {return 1;}
    return fab(a-2) + fab(a-1);
}

//while loop
int main()
{
    int i=0;
    while (i<=10)
    {
    std::cout << fab(i) << std::endl;
    ++i;
    }
return 0;
}
// for loop
int main()
{
    int N=10;
    for (int i=0;i<=N;i++)
    {std::cout << fab(i) << std::endl;}
    return 0;
}
*/

