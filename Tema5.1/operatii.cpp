#include<cmath>
int sum(int a,int b)
{
    return a+b;
}

int dif(int a,int b)
{
    return a-b;
}

int inmultire(int a,int b)
{
    return a*b;
}

int impartire(int a,int b)
{
    return a/b;
}

int modulo(int a,int b)
{
int rez;
rez=a%b;
return rez >= 0 ? rez : rez + std::abs(b);
}
