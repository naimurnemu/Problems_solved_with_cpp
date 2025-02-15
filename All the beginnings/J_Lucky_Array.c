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

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int count = 0;

    for (int i = 0; i < len; i++)
    {
        if(arr[0]== arr[i]) {
            count++;
        }
    }

    if(count % 2) {
        printf("Lucky");
    } else {
        printf("Unlucky");
    }
    

    return 0;
}