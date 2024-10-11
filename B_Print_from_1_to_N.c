#include <stdio.h>

void rec_fun(int n, int i)
{
    if ((n + 1) == i)
        return;
    printf("%d\n", i);
    rec_fun(n, i + 1);
};

int main()
{
    int len;
    scanf("%d", &len);
    rec_fun(len, 1);

    return 0;
}