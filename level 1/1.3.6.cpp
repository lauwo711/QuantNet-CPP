//
//  1.3.6.cpp
//  level 1
//
//  Created by lauwo on 16/8/2020.
//
//Write a C-program that shifts any number two places to the right. Input should be an integer. Output should be the shifted result, as well as output an indication of whether a logical or arithmetic shift is performed (if a 1 or 0 is shifted in at the left side) for the inputted number.

//C use 2's complements (-n=~n+1)
/*
#include <stdio.h>
int main()
{
    int i;
    
    printf("Input an integer:");
    scanf("%d", &i); //store as decial integer
    
    if (i<0)
    {
        printf("Arithmetic right shift by 2: %d\n",i>>1);
    }
    else
    {
        printf("Logical right shift by 2: %d\n",i>>1);
    }
    //positive number perform logical right shift
    //logical = replace leftmost bit by 0
    //ie. 7>>1 = 3
    //7(00000111)>>1 = 3(00000011)
    
    //negative number perform arithmetic right shift
    //arithmetic = replicate old leftmost bit as new leftmost bit
    //ie. -3>>1 = -2
    //-3(~3+1)(11111101)>>1 = -2 (11111110)(~2+1)
    //leftmost = MBS = most significant bit
    
    return 0;
}*/
