#include <stdio.h>
int main(void)
{
    float products[3][2] = {{15, 12.5},
                            {13, 7.5},
                            {100, 97}};

    float discountProduct[3] = {(products[0][0] + products[0][1]) / 2,
                                (products[1][0] + products[1][1]) / 2,
                                (products[2][0] + products[2][1]) / 2};
    printf("Material 0 preço normal e com desconto: %.2f e %.2f\n", products[0][0], products[0][1]);
    printf("Material 1 preço normal e com desconto: %.2f e %.2f\n", products[1][0], products[1][1]);
    printf("Material 2 preço normal e com desconto: %.2f e %.2f\n", products[2][0], products[2][1]);

    printf("\nMaterial 0 preço médio: %.2f\n", discountProduct[0]);
    printf("Material 1 preço médio: %.2f\n", discountProduct[1]);
    printf("Material 2 preço médio: %.2f", discountProduct[2]);
    return 0;
}
