#include <stdio.h>

// Define a structure to represent a product
struct Product {
    char product_name[50];
    int product_no;
    float price;
};

int main() {
    // Declare an array of 5 products
    struct Product products[5];

    // Input details for each product
    for (int i = 0; i < 5; ++i) {
        printf("Enter details for Product %d:\n", i + 1);
        
        // Input product name
        printf("Product Name: ");
        scanf("%s", products[i].product_name);

        // Input product number
        printf("Product Number: ");
        scanf("%d", &products[i].product_no);

        // Input product price
        printf("Product Price: ");
        scanf("%f", &products[i].price);

        printf("\n");
    }

    // Display details for each product using pointers
    printf("Displaying Product Details:\n");
    for (int i = 0; i < 5; ++i) {
        struct Product *ptr = &products[i];
        printf("Product %d:\n", i + 1);
        printf("Product Name: %s\n", ptr->product_name);
        printf("Product Number: %d\n", ptr->product_no);
        printf("Product Price: $%.2f\n", ptr->price);
        printf("\n");
    }

    return 0;
}
