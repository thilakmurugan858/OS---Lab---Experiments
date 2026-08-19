#include <stdio.h>
#include <stdlib.h>

int main()
{
    int request[20], visited[20] = {0};
    int n, head, i, j;
    int movement = 0, min, index;

    printf("Enter Number of Requests: ");
    scanf("%d", &n);

    printf("Enter Request Queue:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &request[i]);

    printf("Enter Initial Head Position: ");
    scanf("%d", &head);

    for(i = 0; i < n; i++)
    {
        min = 9999;
        index = -1;

        for(j = 0; j < n; j++)
        {
            if(!visited[j] && abs(head - request[j]) < min)
            {
                min = abs(head - request[j]);
                index = j;
            }
        }

        visited[index] = 1;
        movement += min;
        head = request[index];
    }

    printf("Total Head Movement = %d\n", movement);

    return 0;
}