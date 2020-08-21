//
//  1.4.2.cpp
//  level 1
//
//  Created by lauwo on 20/8/2020.
//
//Rewrite the C-program that was written for exercise 1, but use do while instead of while.

#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch=0;
    int prev=0;
    int cnt_char=0;
    int cnt_nl=0;
    int cnt_nw=0;
    printf("input: ");
    
    do
    {
        if ((ch=getchar())==EOF)
            break;
        else
        {
        if (
            (isspace(ch)!=1) && (isspace(prev)==1||prev==0) //prev==0 is base case
            )
        {
            ++cnt_nw;
        }
        if (ch==10||ch==13||prev==0) //10=\n, 13=<CR>, prev==0 is base case
        {
            ++cnt_nl;
        }
        ++cnt_char;
        prev=ch;
        }
    }
    while (ch!=EOF);
    
    printf("character count: %d\n",cnt_char);
    printf("newline count: %d\n",cnt_nl);
    printf("new word count: %d\n",cnt_nw);
    return 0;
    
}
