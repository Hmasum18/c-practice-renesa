#include<string.h>
#include <stdio.h>

struct Product
{
    int id; // product id
    char name[255];
    double price;  // 250
    int size;   // 100
    char unit[10]; // g, ml , L etc
};

struct Cart
{
    struct Product product;
    int quantity;
};

int getProductIndex(struct Product productList[], int n, int id){
    for (int i = 0; i < n; i++)
    {
        if(productList[i].id == id){
            return i;
        }
    }
    return -1;
}

int main()
{
    FILE *fp_products = fopen("products.txt", "r");

    int totalProduct;
    fscanf(fp_products, "%d", &totalProduct);
    printf("total products: %d\n", totalProduct);

    struct Product productList[totalProduct];
    for (int i = 0; i < totalProduct; i++)
    {
        fscanf(fp_products, "%d %s %lf %d %s",
               &productList[i].id, productList[i].name, &productList[i].price, &productList[i].size, productList[i].unit);
    }

    printf("Available Products: \n");
    for (int i = 0; i < totalProduct; i++)
    {
        printf("id: %d name:%s price:%.2lf quantity:%d%s\n", productList[i].id, productList[i].name, productList[i].price,
         productList[i].size, productList[i].unit);
    }
    printf("\n");
    

    printf("Enter number of items: ");
    int items;
    scanf("%d", &items);

    struct Cart cart[items];
    int cnt = 0;

    for (int i = 0; i < items; i++)
    {
        printf("Enter item-%d id:", i+1);
        int id;
        scanf("%d", &id);
        int quantity;
        printf("Enter quantity:");
        scanf("%d", &quantity);

        int idx = getProductIndex(productList, totalProduct, id);
        if(idx == -1){
            printf("Product with id %d doesn't exist.\n", id);
        }else{
            cart[cnt].product = productList[idx];
            cart[cnt++].quantity = quantity;
        }
    }
    

    //make reciept
    FILE* fp_receipt = fopen("receipt.txt", "w");

    printf("* * * * * * * * * * * * * * * * *\n");
    printf("          CASH RECEIPT           \n");
    printf("* * * * * * * * * * * * * * * * *\n");

    fprintf(fp_receipt, "* * * * * * * * * * * * * * * * *\n");
    fprintf(fp_receipt, "          CASH RECEIPT           \n");
    fprintf(fp_receipt, "* * * * * * * * * * * * * * * * *\n");

    double total = 0;
    for (int i = 0; i < cnt; i++)
    {
        struct Product product = cart[i].product;
        int quantity = cart[i].quantity;

        printf("%d. %s\n", i+1, product.name);
        printf("%d%s*%d                $%.2lf\n", product.size, product.unit, quantity, product.price*quantity);

        fprintf(fp_receipt ,"%d. %s\n", i + 1, product.name);
        fprintf(fp_receipt ,"%d%s*%d                $%.2lf\n", product.size, product.unit, quantity, product.price * quantity);

        total += product.price*quantity;
    }
    printf("* * * * * * * * * * * * * * * * *\n");
    printf("Total:                $%.2f\n", total);
    printf("* * * * * * * * * * * * * * * * *\n");
    printf("           Thank you               \n");
    printf("* * * * * * * * * * * * * * * * *\n");

    fprintf(fp_receipt, "* * * * * * * * * * * * * * * * *\n");
    fprintf(fp_receipt, "Total:                $%.2f\n", total);
    fprintf(fp_receipt, "* * * * * * * * * * * * * * * * *\n");
    fprintf(fp_receipt, "           Thank you               \n");
    fprintf(fp_receipt, "* * * * * * * * * * * * * * * * *\n");

    fclose(fp_products);
    fclose(fp_receipt);
}
