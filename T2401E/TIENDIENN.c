#include <stdio.h>

float CrystalTienDien(int soKWh) {
    float Price;

    if (soKWh < 50) {
        Price = soKWh * 500;
    } else if (soKWh >=51 && soKWh<=100) {
        Price = 50 * 500 + (soKWh - 50) * 700;
    } else {
        Price = 50 * 500 + 50 * 700 + (soKWh - 100) * 900;
    }

    return Price;
}

int main() {
    
    int soKWh1 = 30, soKWh2 = 80, soKWh3 = 120;

    printf("Total electricity bill to be paid %d kWh is: %.2f dong\n", soKWh1, CrystalTienDien(soKWh1));
    printf("Total electricity bill to be paid %d kWh is: %.2f dong\n", soKWh2, CrystalTienDien(soKWh2));
    printf("Total electricity bill to be paid %d kWh is: %.2f dong\n", soKWh3, CrystalTienDien(soKWh3));

    return 0;
}

