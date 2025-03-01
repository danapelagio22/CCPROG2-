#include <stdio.h>

int main() {
    char products[3][20] = { "Milk", "Bread", "Eggs" }; // 1D Array (Product Names)
    float prices[3][2] = {  // 2D Array (Prices for 3 products in 2 stores)
        {50.0, 52.5},  // Milk prices in Store 1 and Store 2
        {25.0, 24.0},  // Bread prices in Store 1 and Store 2
        {10.5, 11.0}   // Eggs prices in Store 1 and Store 2
    };

    printf("Product\t  Store 1\tStore 2\n");  
    printf("--------------------------------\n");

    for (int i = 0; i < 3; i++) {  // Loop through products
        printf("%-8s", products[i]); // Print product name
        
        for (int j = 0; j < 2; j++) {  // Loop through stores
            printf("\t%.2f", prices[i][j]); // Print price in Store 1 & Store 2
        }
        printf("\n");
    }

    return 0;
}

