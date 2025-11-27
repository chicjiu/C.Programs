//Q138: Print all enum names and integer values using a loop.

#include<stdio.h>
enum games{Cricket=1, Football=2, Basketball=3, Tennis=4};
int main(){
    enum games game;
    for(game=Cricket;game<=Tennis;game++)
    {
        switch(game)
        {
            case Cricket:
                printf("Cricket=%d\n",game);
                break;
            case Football:
                printf("Football=%d\n",game);
                break;
            case Basketball:
                printf("Basketball=%d\n",game);
                break;
            case Tennis:
                printf("Tennis=%d\n",game);
                break;
        }
    }
}
