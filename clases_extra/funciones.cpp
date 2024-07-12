#include <iostream>
#include <conio.h>

using namespace std;

int factorial(int num){//resibe al vector y al 
    int fac=1;
    for (int i = 1; i <=num ; i++)
    {
        fac = fac * i;
    }
    return fac;
}

int main()
{
    cout<<"El factorial es: "<<factorial(4);
    getch();
    return 0;
}
