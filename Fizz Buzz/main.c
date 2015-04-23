//
//  main.c
//  Fizz Buzz
//
//  Created by Abegael Jackson on 2015-04-20.
//  Copyright (c) 2015 Abegael Jackson. All rights reserved.
//


#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x = 0;
    
    for (x = 1; x <= 100; x++)
    {
        if ((x % 3 == 0) && (x % 5 == 0)) {
            printf("FizzBuzz\n");
        }
        else
        {
            
            if (x % 3 == 0)
            {
                printf("Fizz\n");
            }
            else if (x % 5 == 0)
            {
                printf("Buzz\n");
            }
            else
            {
                printf("%d\n", x);
            }
            
        }
    }
    
    return 0;
    
}

