#include <stdio.h>

int main() {
    int distance = 1000; // Distance in meters
    int time = 30; // Time in seconds
    
    float speed = (float)distance / time; // Using cast operator to convert distance to float
    
    printf("Average Speed: %.2f m/s\n", speed);
    
    return 0;
}