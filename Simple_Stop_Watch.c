#include<stdio.h>
#include <unistd.h>

#define cycle 60

int main() {
    int hour, minute, second;
    printf("Enter your hour minute second: ");
    scanf("%d%d%d", &hour, &minute, &second);
    fflush(stdout);

    if (hour < 0 || minute < 0 || second < 0 || minute >= cycle || second >= cycle) {
        printf("Invalid time input!\n");
        return 1;
    }

    int h = 0, m = 0, s = 0;

    while (1) {
        printf("\r%.2d:%.2d:%.2d", h, m, s); 
        fflush(stdout); 

        if (h == hour && m == minute && s == second) {
            break;
        }

        sleep(1);
        s++;

        if (s == cycle) { m++; s = 0; }
        if (m == cycle) { h++; m = 0; }
    }

    printf("\nTime's up!\n"); 
    return 0;
}
