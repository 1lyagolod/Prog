#include <iostream>
using namespace std;

int intToString(int number);
int intToString(int number, int amount);
int intToString(int number, string prescript);
int intToString(int number, int amount, int repeat);
int meetingNumbers(int* array, int size_of_array, int number);

int main()
{
    int number_of_task;
    do 
    {
    cout<<"Введите номер задания(1-5; 0 - выход): "<<endl;
    cin>>number_of_task;
    switch(number_of_task)
    {
        case 0: break;
        case 1:
        {
            cout<<"Задание 1."<<endl;
            int number;
            cout<<"Введите число : "<<endl;
            cin>>number;
            intToString(number);
            break;
        }
        case 2:
        {
            cout<<"Задание 2."<<endl;
            int number;
            int amount;
            cout<<"Введите число : "<<endl;
            cin>>number;
            cout<<"Введите количество элементов : "<<endl;
            cin>>amount;
            intToString(number, amount);
            break;
        }
        case 3:
        {
            cout<<"Задание 3."<<endl;
            int number;
            string prescript;
            cout<<"Введите число : "<<endl;
            cin>>number;
            cout<<"Введите приписку : "<<endl;
            cin>>prescript;
            intToString(number, prescript);
            break;
        }
        case 4:
        {
            cout<<"Задание 4."<<endl;
            int number;
            int amount;
            int repeat;
            cout<<"Введите число : "<<endl;
            cin>>number;
            cout<<"Введите количество элементов : "<<endl;
            cin>>amount;
            cout<<"Введите количество повторов : "<<endl;
            cin>>repeat;
            intToString(number, amount, repeat);
            break;
        }
        case 5:
        {
            cout<<"Задание 5."<<endl;
            int size_of_array;
            int number;
            cout<<"Введите размер массива : "<<endl;
            cin>>size_of_array;
            cout<<"Введите число : "<<endl;
            cin>>number;
            int* array = new int[size_of_array];
            for (int i = 0; i < size_of_array; i++)
            {
                array[i] = rand() % 21 - 10;
                cout<<array[i]<<"\t";
            }
            cout<<endl;
            meetingNumbers(array, size_of_array, number);
            break;
        }
        default: cout<<"Задания с таким номером нету."<<endl; break;
    }
    }
    while (number_of_task != 0);
    return 0;
}

int intToString(int number)
{
int digit;
string var;
string string;
while (number > 0)
    {
        digit = number % 10;
        number = number / 10;
        switch (digit)
        {
        case 0: var = '0';
        break;
        case 1: var = '1';
        break;
        case 2: var = '2';
        break;
        case 3: var = '3';
        break;
        case 4: var = '4';
        break;
        case 5: var = '5';
        break;
        case 6: var = '6';
        break;
        case 7: var = '7';
        break;
        case 8: var = '8';
        break;
        case 9: var = '9';
        break;
        }
        string = var + string;
    }
cout<<"Строка : "<<string<<endl;
return 0;
}

int intToString(int number, int amount)
{
int new_number = 0;
int digit;
string var;
string string;
while (number > 0)
{
    new_number = new_number * 10 + number % 10;
    number = number / 10;
}
for (int i = 0; i < amount; i++)
    {
        digit = new_number % 10;
        new_number = new_number / 10;
        switch (digit)
        {
        case 0: var = '0';
        break;
        case 1: var = '1';
        break;
        case 2: var = '2';
        break;
        case 3: var = '3';
        break;
        case 4: var = '4';
        break;
        case 5: var = '5';
        break;
        case 6: var = '6';
        break;
        case 7: var = '7';
        break;
        case 8: var = '8';
        break;
        case 9: var = '9';
        break;
        }
        string = string + var;
    }
cout<<"Строка : "<<string<<endl;
return 0;
}

int intToString(int number, string prescript)
{
int digit;
string var;
string string;
while (number > 0)
    {
        digit = number % 10;
        number = number / 10;
        switch (digit)
        {
        case 0: var = '0';
        break;
        case 1: var = '1';
        break;
        case 2: var = '2';
        break;
        case 3: var = '3';
        break;
        case 4: var = '4';
        break;
        case 5: var = '5';
        break;
        case 6: var = '6';
        break;
        case 7: var = '7';
        break;
        case 8: var = '8';
        break;
        case 9: var = '9';
        break;
        }
        string = var + string;
    }
    string = prescript + string;
cout<<"Строка с припиской : "<<string<<endl;
return 0;
}

int intToString(int number, int amount, int repeat)
{
int new_number = 0;
int digit;
string var;
string string;
while (number > 0)
{
    new_number = new_number * 10 + number % 10;
    number = number / 10;
}
for (int i = 0; i < amount; i++)
    {
        digit = new_number % 10;
        new_number = new_number / 10;
        switch (digit)
        {
        case 0: var = '0';
        break;
        case 1: var = '1';
        break;
        case 2: var = '2';
        break;
        case 3: var = '3';
        break;
        case 4: var = '4';
        break;
        case 5: var = '5';
        break;
        case 6: var = '6';
        break;
        case 7: var = '7';
        break;
        case 8: var = '8';
        break;
        case 9: var = '9';
        break;
        }
        string = string + var;
    }
    cout<<"Строка : "<<endl;
    for (int i = 0; i < repeat; i++)
    {
        cout<<string + " ";
    }
    cout<<endl;
return 0;
}

int meetingNumbers(int* array, int size_of_array, int number)
{
    int counter = 0;
    for (int i = 0; i < size_of_array; i++)
    {
        if (array[i] == number) counter++;
    }
    if (counter == 0) cout<<"Нету встреч в массиве"<<endl;
    else cout<<"Количество встреч в массиве : "<<counter<<endl;
    return 0;
}