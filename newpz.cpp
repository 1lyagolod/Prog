#include <iostream>
#include <math.h>
using namespace std;

void zd1()
{
    cout<<"Задание 1.\n";
    int a, b, s, p, n, m;
    cout<<"Введите высота прямоугольника\n";
    cin>>a;
    cout<<"Введите длина прямоугольника\n";
    cin>>b;
    for (m = 1; m <= a; m++)
    {
    for (n = 1; n <= b; n++)
    {
    cout<<"X";
    }
    cout<<endl;
    }
    s=a*b;
    p=2*(a+b);
    cout<<"Площадь : "<<s<<endl;
    cout<<"Периметр : "<<p<<endl;
    cout<<"Нажмите Enter для продолжения...\n";
    cin.ignore(1,'\n');
    cin.ignore(1,'\n');
}

void zd2()
{
    cout<<"Задание 2.\n";
    int n, f, f1, f2, i, fact, k;
    cout<<"Введите положительное число n\n";
    cin>>n;
    fact = 1;
    for (k=1; k<=n; k++)
    {
    fact = fact*k;
    }
    cout<<"Факториал числа n : "<<fact<<endl;
    f = 0;
    f1 = 1;
    f2 = 1;
    if (n == 1)
    {
        cout<<"Первые n чисел Фибоначчи : "<<f<<endl;
    }
    else if (n == 2)
    {
        cout<<"Первые n чисел Фибоначчи : "<<f<<" "<<f1<<endl;
    }
    else if (n == 3)
    {
        cout<<"Первые n чисел Фибоначчи : "<<f<<" "<<f1<<" "<<f2<<endl;
    }
    else
    {
        cout<<"Первые n чисел Фибоначчи : "<<f<<" "<<f1<<" "<<f2;
     for (i=4; i<=n; i++)
    {
     f = f1 + f2;
     f2 = f1;
     f1 = f;
     cout<<" "<<f;
    }   
    }
    cout<<endl;
    cout<<"Нажмите Enter для продолжения...\n";
    cin.ignore(1,'\n');
    cin.ignore(1,'\n');
}

void zd3()
{
    cout<<"Задание 3.\n";
    int a, b;
    cout<<"Введите два числа\n";
    cin>>a>>b;
    int numList[2] = {a, b};
    for (int i = 0; i < 2; i++)
    {   
        int count = 0;
        int num = a;
        for (num = numList[i] - 1; num >= 2; num--)
        {
            if (numList[i]%num == 0) count += 1;
        }
        if (count == 0) cout<<"Число "<<numList[i]<<" - простое\n";
        else cout<<"Число "<<numList[i]<<" - составное\n";
    }
    cout<<"НОД первого и второго числа : "<<__algo_gcd(a,b)<<endl;
    cout<<"Нажмите Enter для продолжения...\n";
    cin.ignore(1,'\n');
    cin.ignore(1,'\n');
}

void zd4()
{
    cout<<"Задание 4.\n";
    int n;
    cout<<"Введите число : \n";
    cin>>n;
    string num = "";
    while (n>=1)
    {
        if (n%2==0) num = "0" + num;
        else if (n%2==1) num = "1" + num;
        n = n/2;
    }
    cout<<"Двоичное представление этого числа : "<<num<<endl;
    cout<<"Нажмите Enter для продолжения...\n";
    cin.ignore(1,'\n');
    cin.ignore(1,'\n');
}

void zd5()
{

}

int main()
{
    zd1();
    zd2();
    zd3();
    zd4();
    //zd5();
}
