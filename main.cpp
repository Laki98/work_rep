#include "alpha.h"

int main()
{
    alpha *a;
    a=new alpha[5];//створення динамічного масиву
    delete [] a;//видалення динамічного масиву
    return 0;
}
