//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include<stdio.h>
enum traffic_lights{RED, YELLOW, GREEN};
int main(){
    enum traffic_lights signal;
    for(signal=RED;signal<=GREEN;signal++)
    {
        switch(signal)
        {
            case RED:
                printf("RED: STOP\n");
                break;
            case YELLOW:
                printf("YELLOW: WAIT\n");
                break;
            case GREEN:
                printf("GREEN: GO\n");
                break;
        }
    }
}
