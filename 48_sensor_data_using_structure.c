#include <stdio.h>
struct Sensor {
 int id;
 float reading;
 char status[10];
};
int main() {
 struct Sensor s1;
 printf("Enter Sensor ID: ");
 scanf("%d", &s1.id);
 printf("Enter Sensor Reading: ");
 scanf("%f", &s1.reading);
 printf("Enter Sensor Status (ON/OFF): ");
 scanf("%s", s1.status);
 printf("\n--- Sensor Data ---\n");
 printf("ID: %d\n", s1.id);
 printf("Reading: %.2f\n", s1.reading);
 printf("Status: %s\n", s1.status);
 return 0;
}
