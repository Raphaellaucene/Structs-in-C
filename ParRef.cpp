//Parameter pass by reference
#include <stdio.h>;

void doubleValue (int *pt_num) {//reference of number locate on pointer
    (*pt_num) = (*pt_num) * 2;
}

int main(void) {
    int v_num;

    printf("Insert a number: ");
    scanf("%d", &v_num);

    doubleValue(&v_num);
    printf("The doble value is: %d\n", v_num);

    return 0;
}