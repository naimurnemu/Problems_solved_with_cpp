#include <stdio.h>

void rec_fun(int n, int i)
{
    if ((n + 1) == i)
        return;
    rec_fun(n, i + 1);
    
    if(i == 1) {
       printf("%d", i); 
    } else {
        printf("%d ", i);
    }
};

int main()
{
    int len;
    scanf("%d", &len);
    rec_fun(len, 1);

    return 0;
}