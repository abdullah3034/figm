#include <stdio.h>

// Structure to represent a product
typedef struct Product {
    int id;
    char name[50];
    float price;
} Product;

// Function to swap two products
void swap(Product* a, Product* b) {
    Product temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform selection sort on an array of products (limited to 10 elements)
void selectionSort(Product products[], int n) {
    if (n <= 1) {
        return; // No sorting needed for 1 or less elements
    }

    int minIndex;

    // One by one move boundary of unsorted subarray
    for (int i = 0; i < n - 1; i++) {
        // Find the index of the minimum element in unsorted array
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (products[j].price < products[minIndex].price) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex != i) {
            swap(&products[minIndex], &products[i]);
        }
    }
}

int main() {
    int numProducts;

    // Get the number of products from the seller (assuming a maximum of 10)
    printf("Enter the number of products (maximum 10): ");
    scanf("%d", &numProducts);

    if (numProducts > 10) {
        printf("Error: Maximum of 10 products allowed.\n");
        return 1; // Exit with error if user enters more than 10
    }

    Product products[numProducts];

    // Get product details (id, name, price) from the seller (assuming user input)
    for (int i = 0; i < numProducts; i++) {
        printf("Enter product %d details:\n", i + 1);
        printf("ID: ");
        scanf("%d", &products[i].id);
        printf("Name: ");
        scanf(" %[^\n]", products[i].name); // Read name with spaces using scanf with format specifier
        printf("Price: ");
        scanf("%f", &products[i].price);
    }

    printf("\nProducts before sorting:\n");
    for (int i = 0; i < numProducts; i++) {
        printf("ID: %d, Name: %s, Price: %.2f\n", products[i].id, products[i].name, products[i].price);
    }

    // Sort the products by price
    selectionSort(products, numProducts);

    printf("\nProducts after sorting by price:\n");
    for (int i = 0; i < numProducts; i++) {
        printf("ID: %d, Name: %s, Price: %.2f\n", products[i].id, products[i].name, products[i].price);
    }

    return 0;
}
