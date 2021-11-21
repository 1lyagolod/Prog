#include <iostream>
using namespace std;

void createArray(int* array, int size_of_array);
void showArray(int* array, int size_of_array);
void createMatrix(int** matrix, int rows, int columns);
void randMatrix(int** matrix, int rows, int columns);
void showMatrix(int** matrix, int rows, int columns);
void deleteMatrix(int** matrix, int rows);

void firstEx();
void secondEx();
void thirdEx();
void fourthEx();
void fifthEx();

int main()
{
    int number_of_task;
	do {
	cout<<"Введите номер задания (1-5; 0 - выход)."<<endl;
    cin>>number_of_task;
    switch(number_of_task)
    {
    case 0: break;
    case 1: 
    {
		firstEx();
		break;
    }
	case 2:
	{
		secondEx();
		break;
	}
	case 3:
	{
        thirdEx();
		break;
	}
	case 4:
	{
		fourthEx();
		break;
	}
	case 5:
	{
		fifthEx();
		break;
	}
	default: cout<<"Задания с таким номером нету"<<endl;
	break;
    }
	}
	while (number_of_task != 0);
	return 0;
}

void createArray(int* array, int size_of_array)
{
	for (int i = 0; i < size_of_array; i++)
	{
		array[i] = rand() % 21 - 10;
	}
}

void showArray(int* array, int size_of_array)
{
	for (int i = 0; i < size_of_array; i++)
	{
		cout<<array[i]<<"\t";
	}
}

void createMatrix(int** matrix, int rows, int columns)
{
	for (int i = 0; i < rows; i++)
 	{
 		matrix[i] = new int[columns];
 	}
}

void randMatrix(int** matrix, int rows, int columns)
{
 	for (int i = 0; i < rows; i++)
 	{
 		for (int j = 0; j < columns; j++)
 		{
 			matrix[i][j] = rand() % 21 - 10;
 		}
 	}
}
void showMatrix(int** matrix, int rows, int columns)
 {
 	for (int i = 0; i < rows; i++)
 	{
 		for (int j = 0; j < columns; j++)
 		{
 			cout << matrix[i][j] << "\t";
 		}
 		cout << endl;
 	}
 }

void deleteMatrix(int** matrix, int rows)
{
 	for (int i = 0; i < rows; i++)
 	{
 		delete[] matrix[i];
 	}
 	delete[] matrix;
}

void firstEx()
{
	cout<<"Задание 1."<<endl;
	int rows, columns;
	cout<<"Введите количество строк и столбцов : "<<endl;
	cin>>rows>>columns;
	int** matrix = new int* [rows];
	createMatrix(matrix, rows, columns);
	randMatrix(matrix, rows, columns);
	showMatrix(matrix, rows, columns);
	deleteMatrix(matrix, rows);
	cout<<endl;
}

void secondEx()
{
	cout<<"Задание 2."<<endl;
	int rows, columns;
	double avg;
	int sum;
	int counter;
	cout<<"Введите количество строк и столбцов : "<<endl;
	cin>>rows>>columns;
	int** matrix = new int* [rows];
	createMatrix(matrix, rows, columns);
	randMatrix(matrix, rows, columns);
	showMatrix(matrix, rows, columns);
	for (int i = 0; i < rows; i++)
 	{
		for (int j = 0; j < columns; j++)
		{
			sum = sum + matrix[i][j];
			counter++;
		}
	}
	avg = sum / counter;
	cout<<"Сумма всех элементов матрицы : "<<sum<<endl;
	cout<<"Среднее значение элементов матрицы : "<<avg<<endl<<endl;
}

void thirdEx()
{
	cout<<"Задание 3."<<endl;
	int first_rows, first_columns;
	int second_rows, second_columns;
	cout<<"Введите количество строк и столбцов первой матрицы : "<<endl;
	cin>>first_rows>>first_columns;
	int** first_matrix = new int* [first_rows];
    createMatrix(first_matrix, first_rows, first_columns);
	randMatrix(first_matrix, first_rows, first_columns);
	showMatrix(first_matrix, first_rows, first_columns);
	cout<<"Введите количетсво строк и столбцов второй матрицы : "<<endl;
	cin>>second_rows>>second_columns;
	int** second_matrix = new int* [second_rows];
	createMatrix(second_matrix, second_rows, second_columns);
	randMatrix(second_matrix, second_rows, second_columns);
	showMatrix(second_matrix, second_rows, second_columns);
	if (first_rows == second_columns)
	{
		int third_rows = first_rows;
		int third_columns = second_columns;
		int** third_matrix = new int* [third_rows];
		createMatrix(third_matrix, third_rows, third_columns);
		for (int i = 0; i < first_rows; i++)
		{
			for (int j = 0; j < second_columns; j++)
			{
				third_matrix[i][j] = 0;
				for (int a = 0; a < third_rows; a++)
				{
					third_matrix[i][j] += first_matrix[i][a] * second_matrix[a][j];
				} 
			}
		}
		cout<<"Результат перемножения матриц : "<<endl;
		showMatrix(third_matrix, third_rows, third_columns);
		deleteMatrix(third_matrix, third_rows);
	}
	else cout<<"Количество столбцов первой матрицы и строк второй матрицы должно совпадать!"<<endl;
}

void fourthEx()
{
	cout<<"Задание 4."<<endl;
	int size_of_array;
	int var, counter;
	cout<<"Введите размер массива : "<<endl;
	cin>>size_of_array;
	int* array = new int[size_of_array];
	createArray(array, size_of_array);
	showArray(array, size_of_array);
	for (int i = 0; i < size_of_array; i++)
	{
		for (int j = 0; j < size_of_array; j++)
		{
			if (array[i] == array[j])
			counter++;
			else
			array[j - counter] = array[j];
		}
		size_of_array -= counter;
		counter = 0;
	}

	for (int i = 0; i < size_of_array - 1; i++)
	{
		for (int j = 1; j < size_of_array; j++)
		{
			if (array[j] < array[j-1]) {
				var = array[j];
				array[j] = array[j-1];
				array[j-1] = var;
			}
		}
	}
	cout<<endl;
	showArray(array, size_of_array);
	cout<<endl;
	cout<<array[(size_of_array - 1) / 2]<<endl;
	delete[] array;
}

void fifthEx()
{
	cout<<"Задание 5."<<endl;
	int rows, columns, size_of_array;
	cout<<"Введите количество строк и столбцов"<<endl;
	cin>>rows>>columns;
	int** matrix = new int* [rows];
    createMatrix(matrix, rows, columns);
	randMatrix(matrix, rows, columns);
	showMatrix(matrix, rows, columns);
	size_of_array = rows * columns;
	int* array = new int[size_of_array];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			array[i * columns + j] = matrix[i][j];
		}
	}
	int var;

	for (int i = 0; i < size_of_array - 1; i++)
	{
		for (int j = 1; j < size_of_array; j++)
		{
			if (array[j] < array[j - 1]) {
				var = array[j];
				array[j] = array[j - 1];
				array[j - 1] = var;
			}
		}
	}
	cout<<"Массив из матрицы : "<<endl;
	showArray(array, size_of_array);
	cout<<endl;
	cout<<"Медиана матрицы равна: "<<array[(size_of_array - 1) / 2]<<endl;
	cout<<"Наименьший элемент матрицы : "<<array[0]<<endl;
	cout<<"Наибольший элемент матрицы : "<<array[size_of_array-1]<<endl;
	delete[] array;
    deleteMatrix(matrix, rows);
}