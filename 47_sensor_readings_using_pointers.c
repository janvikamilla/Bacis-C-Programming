#include <stdio.h>
#include <conio.h>
int main() {
 int sensorData[5] = {10, 20, 30, 40, 50};
 int *ptr;
 int i;
 clrscr();
 ptr = sensorData; // Pointer points to first element of array
 printf("Sensor Readings:\n");
 for(i = 0; i < 5; i++) {
 printf("Sensor %d Reading = %d\n", i+1, *(ptr + i));
 }
 getch();
 return 0;
}
