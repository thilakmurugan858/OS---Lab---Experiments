#include <stdio.h>
#include <stdlib.h>

int main()
{
    int request[20], n, head;
    int i, movement = 0;

    printf("Enter Number of Requests: ");
    scanf("%d", &n);

    printf("Enter Request Queue:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &request[i]);

    printf("Enter Initial Head Position: ");
    scanf("%d", &head);

    for(i = 0; i < n; i++)
    {
        movement += abs(head - request[i]);
        head = request[i];
    }

    printf("Total Head Movement = %d\n", movement);

    return 0;
}