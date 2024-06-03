#include <stdio.h>
// using namespace std;
int main()
{
    int i, j, var = 'A';
    for (i = 5; i >= 1; i--) { // loop-1
        for (j = 0; j < i; j++) //loop-2
            printf("%c ", (var + j));
        printf("\n");
    }
    char gs = 'A';
    printf("%c\n",gs+0);
    return 0;
}
�
// 5
//l1 -> 5
    // l2 - 4times
        �