#include <stdio.h>

int main()
{
    int len, k;
    scanf("%d %d", &len, &k);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (sum + arr[i] > sum)
        {

            sum += arr[i];
        }
    }

    printf("%lld", sum);

    return 0;
}