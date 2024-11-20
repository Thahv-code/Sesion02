
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 1;
    // kieu du lieu so nguyen de luu tru so nguyen duong hoac nguyen am
    float b = 1\2;
    //kieu du lieu so thuc de luu tru so co dau thap phan
    double c = 4.5;
    //kieu du lieu so thuc de luu tru so co dau thap phan va co so byte nhieu hon float va luu duoc 15 so sau dau phay
    char d = 'a';
    //kieu ki tu de luu mot ki tu
    printf ("a la %d, b la %f, c la %lf, d la %c\n",a, b, c, d);
    return 0;
}

