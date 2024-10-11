#include <stdio.h>

void rec_fun(int n, int i) {
    if (n == i) return;
    printf("I love Recursion\n");
    rec_fun(n, i+ 1);
};

int main()
{
    int len;
    scanf("%d", &len);
    rec_fun(len, 0);

    return 0;
}