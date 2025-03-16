#include <stdio.h>

int main()
{
    printf("Thu chich dien\n");
    printf("Ong co muon chich dien khong Phuc ui?");
    printf("0. Khong 1. Co \n");

    int state = 0;
    do
    {
        scanf("%d", &state);
    } while (state != 1);

    printf("KKKK");

    return 0;
}