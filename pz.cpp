#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n;
   cout <<"Введите трехзначное число\n"; 
   cin >> n;
   if (99 < n && n < 1000)
   { 
   if (n % 2 == 0)
   cout <<"Число является четным\n";
   else
   cout <<"Число является нечетным\n";
   }
   else cout <<"Ошибка. Введите трехзначное число!";
   cin.ignore(1,'\n');
   cin.ignore(1,'\n');
   int a, b ,c;
   a = n/100;
   b = (n - 100*a)/10;
   c = n - 100*a - 10*b;
   cout<<"Сотни : " << a <<endl;
   cout<<"Десятки : " << b <<endl; 
   cout<<"Еденицы : "<< c <<endl;
   cin.ignore(1,'\n');
   int m;
   cout<<"Введите цифру от 1 до 12\n";
   cin >> m;
   switch (m)
   {
   case 1: cout<<"Январь"<<endl; break;
   case 2: cout<<"Февраль"<<endl; break;
   case 3: cout<<"Март"<<endl; break;
   case 4: cout<<"Апрель"<<endl; break;
   case 5: cout<<"Май"<<endl; break;
   case 6: cout<<"Июнь"<<endl; break;
   case 7: cout<<"Июль"<<endl; break;
   case 8: cout<<"Август"<<endl; break;
   case 9: cout<<"Сентябрь"<<endl; break;
   case 10: cout<<"Октябрь"<<endl; break;
   case 11: cout<<"Ноябрь"<<endl; break;
   case 12: cout<<"Декабрь"<<endl; break;
   }  
   cin.ignore(1,'\n');
   cin.ignore(1,'\n');
   switch (m)
   {
   case 1: cout<<"Пора года : зима"<<endl; break;
   case 2: cout<<"Пора года : зима"<<endl; break;
   case 3: cout<<"Пора года : весна"<<endl; break;
   case 4: cout<<"Пора года : весна"<<endl; break;
   case 5: cout<<"Пора года : весна"<<endl; break;
   case 6: cout<<"Пора года : лето"<<endl; break;
   case 7: cout<<"Пора года : лето"<<endl; break;
   case 8: cout<<"Пора года : лето"<<endl; break;
   case 9: cout<<"Пора года : осень"<<endl; break;
   case 10: cout<<"Пора года : осень"<<endl; break;
   case 11: cout<<"Пора года : осень"<<endl; break;
   case 12: cout<<"Пора года : зима"<<endl; break;
   }  
   return 0;
}


