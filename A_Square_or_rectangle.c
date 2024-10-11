#include <stdio.h>

int main()
{
    int lim;
    scanf("%d", &lim);
    for (int i = 0; i < lim; i++)
    {
        int width, breadth;
        scanf("%d %d", &width, &breadth);
        if(width == breadth) {
            printf("Square\n");
        } else {
            printf("Rectangle\n");
        }
    }
    
    return 0;
}