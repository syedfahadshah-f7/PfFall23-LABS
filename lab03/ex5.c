#include <stdio.h>
int main (){
    int totalkilometers;
    int consumedfuel;
    
    int south,west,east,north;
    printf("Enter kilometers:");
    scanf("%d %d %d %d", &south ,&west, &east, &north);
    
    int fuel;
    printf(" EnterFuel consumption:");
    scanf("\n%d", &fuel);
    
    totalkilometers = south+west+east+north;
    consumedfuel = totalkilometers/fuel;
    printf(" Consumed Fuel = %.d", consumedfuel);
    return 0;
}
