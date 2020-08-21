//
//  1.4.1.cpp
//  level 1
//
//  Created by lauwo on 19/8/2020.
//
//Write a C-program that asks for text input from the keyboard. The output of this program should be the amount of characters, the amount of words and the amount of newlines that have been typed. Multiple consecutive spaces shouldnot be counted as multiple words. Reading keys from the keyboard is possible by using the function getchar(). The reading of characters from the keyboard can be stopped when the shutdown-code ^D (CTRL + D) is entered. ^D has the ASCII-value 4 (see forum discusson on this exercise). Use a while loop.


//getchar() read input characters in buffer one by one
//eg. int main()
//      {printf("enter sth: ");
//       printf("%c\n",getchar());
//       printf("%c\n",getchar());
//       return 0;}
//input ka in console, return k a
//ref: https://blog.csdn.net/weixin_30907523/article/details/96286583?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522159784367419724839257217%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=159784367419724839257217&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduend~default-4-96286583.first_rank_ecpm_v3_pc_rank_v2&utm_term=getchar%28%29%E7%9A%84%E5%8A%9F%E8%83%BD&spm=1018.2118.3001.4187
/*
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
    
    //ch=getchar()
    //while(ch!=EOF)
    //Wrong, because ch will be 97 for the whole loop, infinite loop
    
    while((ch=getchar())!=EOF)  //assign getchar() to ch, then compare with EOF
                                //&& ch!=4 && ch!=26)
                                //4=^D, 26=^Z (close the input, not a character)
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
    
    printf("character count: %d\n",cnt_char);
    printf("newline count: %d\n",cnt_nl);
    printf("new word count: %d\n",cnt_nw);
    return 0;
    
}*/
