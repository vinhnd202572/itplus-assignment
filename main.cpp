#include <stdio.h>
#include <string.h>
enum productType
{
    clothing,
    footwear,
    electronic,

};

union properties
{
    char size[10]; // size of clothing or footwear
    float weight;  // weight of electronic
};

struct Product
{
    char name[50];
    float price;
    enum productType type;
    union properties details;
};
// Research product information
// void showInfor(Product products[], int numProducts)
// {
//     char isContinue;
//     do
//     {
//         char userProduction[50];

//         printf("Enter production name:");

//         fflush(stdin);

//         fgets(userProduction, sizeof(userProduction), stdin);

//         for (int i = 0; i < numProducts; i++)
//         {
//             if (!strcmp(products[i].name, userProduction))
//             {

//                 printf("-----This is information------");
//                 printf("\nProduct name: ");
//                 puts(products[i].name);
//                 printf("\nProduct type:");
//                 if (products[i].type == 0)
//                 {
//                     printf("\nClothing");
//                     printf("\nSize:");
//                     puts(products[i].details.size);
//                 }
//                 else if (products[i].type == 1)
//                 {
//                     printf("\nFootware");
//                     printf("\nSize:");
//                     puts(products[i].details.size);
//                 }
//                 else if (products[i].type == 2)
//                 {
//                     printf("\nElectronics");
//                     printf("\nWeight:");
//                     scanf("%f", products[i].details.weight);
//                 }
//                 printf("\nPrice: ");
//                 printf("%f", products[i].price);
//             }
//             else
//             {
//                 continue;
//             }
//         }
//         printf("\nOne more product ?(y/n)");

//         scanf("%c", &isContinue);
//     } while (isContinue != 'n');
// }

void nhapSanPham()
{

    int numProducts;

    printf("Enter number of products (1,2,3, ...) : ");
    scanf("%d", &numProducts);

    struct Product products[numProducts];

    for (int i = 0; i < numProducts; i++)
    {
        printf("Enter information of product %d: ", i + 1);
        printf("\nProduct name: ");
        fflush(stdin);
        fgets(products[i].name, sizeof(products[i].name), stdin);
        printf("\nEnter product price: ");
        scanf("%d", &products[i].price);

        printf("\nChoose product type (0: Clothing, 1: Footwear, 2: Dien tu)");
        scanf("\n%d", (int *)&products[i].type);

        int k = products[i].type;

        if (k == clothing || k == footwear)
        {
            printf("\nSize: ");
            fflush(stdin);
            fgets(products[i].details.size, sizeof(products[i].details.size), stdin);
        }
        else if (k == electronic)
        {
            printf("\nWeight: ");

            scanf("%f", &products[i].details.weight);
        }
    }

    char isContinue;

    do
    {
        char userProduction[50];

        printf("Enter production name:");

        fflush(stdin);

        fgets(userProduction, sizeof(userProduction), stdin);

        for (int i = 0; i < numProducts; i++)
        {
            if (!strcmp(products[i].name, userProduction))
            {

                printf("-----This is information------");
                printf("\nProduct name: ");
                puts(products[i].name);
                printf("\nProduct type:");
                if (products[i].type == 0)
                {
                    printf("\nClothing");
                    printf("\nSize:");
                    puts(products[i].details.size);
                }
                else if (products[i].type == 1)
                {
                    printf("\nFootware");
                    printf("\nSize:");
                    puts(products[i].details.size);
                }
                else if (products[i].type == 2)
                {
                    printf("\nElectronics");
                    printf("\nWeight:");
                    printf("%0.2f", products[i].details.weight);
                }
                printf("\nPrice: ");
                printf("%0.2f", products[i].price);
            }
            else
            {
                continue;
            }
        }
        printf("\nOne more product ?(y/n)");

        scanf("%c", &isContinue);
    } while (isContinue != 'n');
}

int main()
{
    nhapSanPham();
}