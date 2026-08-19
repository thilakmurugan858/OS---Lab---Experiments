#include <stdio.h>
#include <stdlib.h>

int main()
{
    int request[20], n, head, diskSize;
    int i, j, movement = 0;
    int temp;

    printf("Enter Number of Requests: ");
    scanf("%d", &n);

    printf("Enter Request Queue:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &request[i]);

    printf("Enter Initial Head Position: ");
    scanf("%d", &head);

    printf("Enter Disk Size: ");
    scanf("%d", &diskSize);

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(request[i] > request[j])
            {
                temp = request[i];
                request[i] = request[j];
                request[j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        if(request[i] >= head)
        {
            movement += abs(head - request[i]);
            head = request[i];
        }
    }

    movement += abs(head - (diskSize - 1));
    head = diskSize - 1;

    for(i = n - 1; i >= 0; i--)
    {
        if(request[i] < head)
        {
            movement += abs(head - request[i]);
            head = request[i];
        }
    }

    printf("Total Head Movement = %d\n", movement);

    return 0;
}
