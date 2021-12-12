#include "libs/matrix.cpp"


int main()
{

    Matrix2d<int> a(3,3);
    Matrix2d<int> b(3,3);
    a.print();
    b.print();

    a + b;

    a.print();
    b + a;
    b.print();

    Matrix2d<int> c(3,3);

    c = a + b;




    return 0;
}
