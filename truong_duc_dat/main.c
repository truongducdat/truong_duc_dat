#include <stdio.h>


int main()
{

    for (int i = 2; i <= 9; i++) {
        printf("bang cuu chuong %d\n", i);

        for (int a = 1; a <= 10; a++)
        {
            printf("%d x %d = %d\n", a, i, a * i);
        }
        
    }
    return 0;
    

}