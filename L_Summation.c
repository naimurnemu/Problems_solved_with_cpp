#include <stdio.h>



int main()
{
    int len; 
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        ans += arr[i];
    }
    
    printf("%d", ans);
    return 0;
}

/* 
    int sum (int n, int arr[], int i) {
    if(i == n) return 0;
    int value = 0;
    value = arr[i] + sum(n, arr, i + 1);
    return value;
    }
 */