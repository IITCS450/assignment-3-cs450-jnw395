#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
    int tickets[3] = {10, 20, 30}

    for(i = 0; i < 3; i++)
    {
        int pid = fork()
        if(pid == 0)
        {
            settickets(tickets[i]) // 10, 20, 30 tickets

            int counter = 0
            int start = uptime();
            while(uptime() - start < 500)
            {
                counter++;
            }
            printf(1, "Tickets %d did %d loops\n", tickets[i], counter);
            exit();
         }
    }

    // Parent waits for children
    for(int i = 0; i < 3; i++)
        wait();

  exit();
}