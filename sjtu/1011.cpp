#include <iostream>
#include <iomanip>

using namespace std;

typedef struct Complex{
    double a;
    double b;
}Mc;

Mc add(Mc A, Mc B)
{
    Mc C;
    C.a = A.a + B.a;
    C.b = A.b + B.b;
    return C;
}

Mc subs(Mc A, Mc B)
{
    Mc C;
    C.a = A.a - B.a;
    C.b = A.b - B.b;
    return C;
}

Mc mult(Mc A, Mc B)
{
    Mc C;
    C.a = A.a*B.a - A.b*B.b;
    C.b = A.a*B.b + A.b*B.a;
    return C;
}

Mc div(Mc A, Mc B)
{
    Mc _B;
    double c = B.a*B.a+B.b*B.b;
    _B.a = B.a;
    _B.b = -B.b;
    _B = mult(A, _B);

    _B.a = double(_B.a) / double(c);
    _B.b = double(_B.b) / double(c);
    return _B;
}

void show(Mc A)
{
    cout << setiosflags(ios::fixed) << setprecision(2) << double(A.a) << " " << double(A.b) << endl;
}


int main() {
    Mc A, B;
    cin >> A.a >> A.b >> B.a >> B.b;

    show(add(A, B));
    show(subs(A, B));
    show(mult(A, B));
    show(div(A, B));
    A = add(A, B);
    show(A);
    A = subs(A, B);
    show(A);
    A = mult(A, B);
    show(A);
    A = div(A, B);
    show(A);
    return 0;
}

