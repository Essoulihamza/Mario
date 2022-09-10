#include <stdio.h>

int main(void) 
{
    //ask user for height:
    // 
    int height;
    do{
        printf("Height: ");
        scanf("%i", &height);
        if (height < 0)
            printf("This is a negative number, try a positive number\n");
        else if (height > 8)
            printf("This is a number greater than 8, try a smaller number\n");
    }while(height < 0 || height > 8);
    //loops to print
    for( int i = 0; i < height; i++ )
    {
        // here we will  to print spaces  in condition to line we are in 
        for( int s = height - 1 ; s > i ;s-- )
        {
            printf(" ");
        }

        //half part of the mario shape
        for ( int h = 0; h <= i ; h++ )
        {
            printf("#");
        }
        //the second part of the mario shape
        printf("  ");
        for ( int h = 0; h <= i ; h++ )
        {
            printf("#");
        }

        printf("\n");
    }

    

}