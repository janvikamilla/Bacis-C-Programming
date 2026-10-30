#include <stdio.h>

int main()
{
int distance[5] = {10, 20, 15, 25, 30};
int i, total = 0;

printf("Robot Distance Records:\n");

for(i = 0; i < 5; i++)
{
    printf("Movement %d: %d meters\n", i + 1, distance[i]);
    total = total + distance[i];
}

printf("Total Distance Covered: %d meters\n", total);

return 0;

}
