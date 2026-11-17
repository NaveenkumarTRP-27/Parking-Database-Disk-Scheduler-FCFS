#include <stdio.h>
#include <stdlib.h>

#define MAX_REQUESTS 100

int main()
{
    int request[MAX_REQUESTS];
    int n, head;
    int current_head;
    int total_movement = 0;
    int movement;
    int i;

    printf("\n");
    printf("====================================================\n");
    printf("       PARKING DATABASE DISK SCHEDULER\n");
    printf("       FCFS (FIRST COME FIRST SERVE)\n");
    printf("====================================================\n");

    printf("\nEnter initial disk head position: ");
    scanf("%d", &head);

    if (head < 0)
    {
        printf("\nError: Disk head position cannot be negative.\n");
        return 1;
    }

    printf("Enter number of disk requests: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_REQUESTS)
    {
        printf("\nError: Number of requests must be between 1 and %d.\n",
               MAX_REQUESTS);
        return 1;
    }

    printf("\nEnter disk request positions:\n");

    for (i = 0; i < n; i++)
    {
        printf("Request %d: ", i + 1);
        scanf("%d", &request[i]);

        if (request[i] < 0)
        {
            printf("\nError: Disk request position cannot be negative.\n");
            return 1;
        }
    }

    printf("\n====================================================\n");
    printf("             DISK SCHEDULING DETAILS\n");
    printf("====================================================\n");

    printf("\nInitial Disk Head Position : %d\n", head);
    printf("Total Number of Requests   : %d\n", n);

    printf("\nFCFS Request Arrival Order:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d", request[i]);

        if (i != n - 1)
        {
            printf(" -> ");
        }
    }

    printf("\n\n====================================================\n");
    printf("              HEAD MOVEMENT TABLE\n");
    printf("====================================================\n");

    printf("\n%-12s %-15s %-15s\n",
           "From", "To", "Movement");

    printf("----------------------------------------------------\n");

    current_head = head;

    for (i = 0; i < n; i++)
    {
        movement = abs(current_head - request[i]);

        printf("%-12d %-15d %-15d\n",
               current_head, request[i], movement);

        total_movement = total_movement + movement;

        current_head = request[i];
    }

    printf("----------------------------------------------------\n");

    printf("\n====================================================\n");
    printf("             DISK HEAD MOVEMENT SEQUENCE\n");
    printf("====================================================\n");

    printf("\n%d", head);

    for (i = 0; i < n; i++)
    {
        printf(" -> %d", request[i]);
    }

    printf("\n\n====================================================\n");
    printf("                FINAL RESULTS\n");
    printf("====================================================\n");

    printf("\nTotal Head Movement : %d cylinders\n",
           total_movement);

    printf("Average Head Movement : %.2f cylinders\n",
           (float)total_movement / n);

    printf("Scheduling Algorithm : FCFS\n");
    printf("Request Order : Arrival Order\n");

    printf("\n====================================================\n");
    printf("   FCFS DISK SCHEDULING COMPLETED SUCCESSFULLY\n");
    printf("====================================================\n");

    return 0;
}
