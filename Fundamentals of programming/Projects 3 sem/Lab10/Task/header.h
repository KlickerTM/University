//#define HEADER_H

#ifndef HEADER_H

template <typename T>
T min(T num1, T num2) 
{
	if (num1 > num2) // при проверке меняем знак тут
		return num2;
	else
		return num1;

}

template <typename T>
T* sort(T* arr, int size) 
{
	for (int i = 0; i < size - 1; i++) 
	{
		for (int i = 0; i < size - 1; i++) 
		{
			if (arr[i] > arr[i + 1]) 
			{ // при проверке меняем знак тут
				T temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
	}
	return arr;
}

template <typename T>
T sum(T* arr, int size) 
{
	T sum = arr[0];
	for (int i = 1; i < size; i++) 
	{
		//if (arr[i] > 0) // при разкоментировать строку тут
		sum += arr[i];
	}
	return sum;
}

bool proverka1(int* temp);
bool proverka2(double* temp);
bool proverka3(char* temp);
#endif
