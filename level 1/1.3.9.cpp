//
//  1.3.9.cpp
//  level 1
//
//  Created by lauwo on 18/8/2020.
//
/*
//Tricky!!
#include <stdio.h>
int main()
{
int x=1;
int y=1;
int z=1;
x+=y+=x;  //y=y+x so y=2, x+=2 so x=3
    
printf("%d\n\n", (x<y)?y:x); //3 as x=y, return x
printf("%d\n", (x<y)?x++:y++);//2 as x=y, return y++, which is still 2
                              //if changed to ++y, it returns 3
printf("%d\n", x);//3
printf("%d\n", y);//3 as y++ ran
return 0; }
*/
