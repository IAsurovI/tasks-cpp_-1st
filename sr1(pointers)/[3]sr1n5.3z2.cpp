//Используя имя массива как указатель, и применяя адресную арифметику выполнить задание.
//Дан одномерный массив, состоящий из N вещественных элементов.
//2.1.Заполнить массив случайными числами. ++
//2.2.Найти минимальный положительный элемент. ++
//2.3.Вычислить произведение не нулевых элементов массива. ++
//2.4.Вывести ненулевые элементы на экран в обратном порядке. ++ 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "RUS");
    srand(time(0));
    int N;   
    cout << "Введите размер массива: ";
    cin >> N;
    double* a = new double[N];
    const int* pN(&N);
    double* pa = a;
    float min = 0.0, k = 0.0, t = 1.0, ty = 1.0, g = 0.0, f = 0.0, b = 0.0;
    float* pmin(&min), * pk(&k), * pt(&t);
    cout << endl;
    // 2.1
    for (int i = 0; i < *pN; i++)
    {
        g= rand() % 9;
        f = g /10 ;
        b = rand() % 20 - 15;
        pa[i] = b + f;
        cout << "|" << "a[" << i << "]=" << pa[i] << endl;
    }
    cout << endl;
    system("pause");
    cout << endl;
    //2.2
    for (int i = 0; i < *pN; i++)
    {
        if (pa[i] > 0) k++; //положительные элементы
        if (pa[i] > 0 && (*pk == 1 || pa[i] < *pmin)) *pmin = pa[i]; //минимальный из положительных
    }
    cout << "Минимальный моложительный элемент массива: " << *pmin << endl;
    cout << endl;
    system("pause");
    cout << endl;
    //2.3
    for (int i = 0; i < *pN; i++)
    {
        if (pa[i] > 0.0 || pa[i] < 0.0)
        {
            t *= pa[i]; 
            //cout << t << endl;//отладочный ( ПРОВЕРКА )
        }
    }
    cout << "Произведение ненулевых элементов массива: " << *pt << endl;
    cout << endl;
    system("pause");
    cout << endl;
    //2.4
    cout << "Вывести ненулевые элементы на экран в обратном порядке: " << endl;
    for (int i =*pN; i > 0; i--)
    {
        if (pa[i] > 0 || pa[i] < 0) 
        {
            cout << "|" << "a[" << i << "]=" << pa[i] << endl;
        }
    }
}
