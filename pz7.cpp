#include <iostream>
using namespace std;

void fillingStudentsByKeyboard(struct students* students_of_group ,int number_of_students);
void fillingStudentsByRandom(struct students* students_of_group ,int number_of_students);
void printStudents(struct students* students_of_group, int number_of_students);
string mostCommonName(struct students* students_of_group, int number_of_students);
int averageAge(struct students* students_of_group, int number_of_students);
void sortByHeight(struct students* students_of_group, int number_of_students);
void deleteArray(students* students_of_group);

struct students
{
    string name;
    string surname;
    string patronymic;
    int height;
    struct birthday
    {
        int day;
        int month;
        int year;
    };
    birthday birthdate;
};


int main()
{
    srand(time(0));
    int number_of_students;
    int value;
    cout<<"Количество студентов в группе : "<<endl;
    cin>>number_of_students;
    students* students_of_group = new students[number_of_students];
    cout<<"Ручной ввод студентов или рандом? | 1 - Ручной, 2 - Рандом"<<endl;
    cin>>value;
    switch(value)
    {
        case 1: 
        fillingStudentsByKeyboard(students_of_group, number_of_students);
        break;
        case 2:
        fillingStudentsByRandom(students_of_group, number_of_students);
        break;
    }
    printStudents(students_of_group, number_of_students);
    cout<<endl<<endl;
    cout<<"Самое распространенное имя : "<<mostCommonName(students_of_group, number_of_students)<<endl;
    cout<<endl;
    cout<<"Средний возраст студентов : "<<averageAge(students_of_group, number_of_students)<<endl;
    cout<<endl;
    cout<<"Сортировка студентов по росту : "<<endl;
    sortByHeight(students_of_group, number_of_students);
    cout<<endl;
    deleteArray(students_of_group);
    return 0;
}

enum Names
{
    Ilya = 1,
    Alexey = 2,
    Sophie = 3,
    Ira = 4,
    Yury = 5,
    Olga = 6,
    Dmitry = 7,
    Andrey = 8,
    Sergey = 9,
    Maria = 10,
};

enum Surnames
{
    Golod = 1,
    Korotkevich = 2,
    Petrovich = 3,
    Vitushko = 4,
    Gromyko = 5,
    Khimich = 6,
    Lukashonok = 7,
    Turok = 8,
    Bondar = 9,
    Chekan = 10,
};

enum Patronymics
{
    Olegovich = 1,
    Pavlovich = 2,
    Alexandrovna = 3,
    Genadevich = 4,
    Yurovna = 5,
    Alexeevich = 6,
    Paradeevich = 7,
    Evgeneevich = 8,
    Mihaylovna = 9,
    Sergeevna = 10,
};

void fillingStudentsByKeyboard(struct students* students_of_group,int number_of_students)
{
    for (int i = 0; i < number_of_students; i++)
    {
        cout<<"Введите имя студента номер "<<i+1<<"."<<endl;
        cin>>students_of_group[i].name;
        cout<<"Введите фамилию студента номер "<<i+1<<"."<<endl;
        cin>>students_of_group[i].surname;
        cout<<"Введите отчество студента номер "<<i+1<<"."<<endl;
        cin>>students_of_group[i].patronymic;
        cout<<"Введите рост студента номер "<<i+1<<"."<<endl;
        cin>>students_of_group[i].height;
        do
        {
            cout<<"Введите день рождения студента номер "<<i+1<<"."<<endl;
            cin>>students_of_group[i].birthdate.day;
        } while (students_of_group[i].birthdate.day > 31 || students_of_group[i].birthdate.day < 0);
        do
        {
            cout<<"Введите месяц рождения студента номер "<<i+1<<"."<<endl;
            cin>>students_of_group[i].birthdate.month;
        } while (students_of_group[i].birthdate.month > 13 || students_of_group[i].birthdate.month < 0);
        do
        {
            cout<<"Введите год рождения студента номер "<<i+1<<"."<<endl;
            cin>>students_of_group[i].birthdate.year;
        } while (students_of_group[i].birthdate.year < 1999 || students_of_group[i].birthdate.year > 2005);
    }
}

void fillingStudentsByRandom(struct students* students_of_group, int number_of_students)
{
    for (int i = 0; i < number_of_students; i++)
    {
        switch (rand() % 10 + 1)
        {
            case Ilya:
            students_of_group[i].name = "Илья";
            break;
            case Alexey:
            students_of_group[i].name = "Алекскей";
            break;
            case Sophie:
            students_of_group[i].name = "Софья";
            break;
            case Ira:
            students_of_group[i].name = "Ира";
            break;
            case Yury:
            students_of_group[i].name = "Юрий";
            break;
            case Olga:
            students_of_group[i].name = "Ольга";
            break;
            case Dmitry:
            students_of_group[i].name = "Дмитрий";
            break;
            case Andrey:
            students_of_group[i].name = "Андрей";
            break;
            case Sergey:
            students_of_group[i].name = "Сергей";
            break;
            case Maria:
            students_of_group[i].name = "Мария";
            break;
        }
        switch (rand() % 10 + 1)
        {
            case Golod:
            students_of_group[i].surname = "Голод";
            break;
            case Korotkevich:
            students_of_group[i].surname = "Короткевич";
            break;
            case Petrovich:
            students_of_group[i].surname = "Петрович";
            break;
            case Vitushko:
            students_of_group[i].surname = "Витушко";
            break;
            case Gromyko:
            students_of_group[i].surname = "Громыко";
            break;
            case Khimich:
            students_of_group[i].surname = "Химич";
            break;
            case Lukashonok:
            students_of_group[i].surname = "Лукашонок";
            break;
            case Turok:
            students_of_group[i].surname = "Турок";
            break;
            case Bondar:
            students_of_group[i].surname = "Бондарь";
            break;
            case Chekan:
            students_of_group[i].surname = "Чекан";
            break;
        }
        switch (rand() % 10 + 1)
        {
            case Olegovich:
            students_of_group[i].patronymic = "Олегович";
            break;
            case Pavlovich:
            students_of_group[i].patronymic = "Павлович";
            break;
            case Alexandrovna:
            students_of_group[i].patronymic = "Александрович";
            break;
            case Genadevich:
            students_of_group[i].patronymic = "Генадевич";
            break;
            case Yurovna:
            students_of_group[i].patronymic = "Юровна";
            break;
            case Alexeevich:
            students_of_group[i].patronymic = "Алексеевич";
            break;
            case Paradeevich:
            students_of_group[i].patronymic = "Парадевич";
            break;
            case Evgeneevich:
            students_of_group[i].patronymic = "Евгеньевич";
            break;
            case Mihaylovna:
            students_of_group[i].patronymic = "Михайловна";
            break;
            case Sergeevna:
            students_of_group[i].patronymic = "Сергеевна";
            break;
        }
        students_of_group[i].height = rand() % 50 + 151;
		students_of_group[i].birthdate.day = rand() % 31;
		students_of_group[i].birthdate.month = rand() % 13;
		students_of_group[i].birthdate.year = rand() % 5 + 2000;
    }
}

void printStudents(struct students* students_of_group, int number_of_students)
{
    cout<<"   ------- | ФИО | ------- | Рост | ------- | Дата рождения | -------"<<endl;
    for (int i = 0; i < number_of_students; i++)
    {
        cout<<"| "<<i+1<<" | ";
        cout<<students_of_group[i].surname<<" ";
        cout<<students_of_group[i].name<<" ";
        cout<<students_of_group[i].patronymic<<"\t";
        cout<<students_of_group[i].height<<"\t";
        if (students_of_group[i].birthdate.day < 10) cout<<"0"<<students_of_group[i].birthdate.day<<".";
        else cout<<students_of_group[i].birthdate.day<<".";
        if (students_of_group[i].birthdate.month < 10) cout<<"0"<<students_of_group[i].birthdate.month<<".";
        else cout<<students_of_group[i].birthdate.month<<".";
        cout<<students_of_group[i].birthdate.year<<endl;
    }
}

string mostCommonName(struct students* students_of_group, int number_of_students)
{
    string most_common_name;
    int max_repeats = 0;
    int repeats = 0;
    for (int i = 0; i < number_of_students; i++)
    {
        for (int j = 0; j < number_of_students; j++)
        {
            if (students_of_group[i].name == students_of_group[j].name) repeats++;
        }
        if (repeats > max_repeats) most_common_name = students_of_group[i].name; max_repeats = repeats;
        repeats = 0;
    }
    return most_common_name;
}

int averageAge(struct students* students_of_group, int number_of_students)
{
    int avg;
    int sum = 0;
    for (int i = 0; i < number_of_students; i++)
    {
        sum += 2021 - students_of_group[i].birthdate.year;       
    }   
    avg = sum / number_of_students;
    return avg;
}

void sortByHeight(struct students* students_of_group, int number_of_students)
{
    students temp;
    for (int i = 0; i < number_of_students; i++)
	{
		for (int j = 0; j < number_of_students; j++)
		{
			if (students_of_group[j].height < students_of_group[j + 1].height)
			{
				temp = students_of_group[j + 1];
				students_of_group[j + 1] = students_of_group[j];
				students_of_group[j] = temp;
			}
		}
	}
	printStudents(students_of_group, number_of_students);
}

void deleteArray(students* students_of_group)
{
    delete[] students_of_group;
}