#include <iostream>
using namespace std;
void zad2()
{
    const int range = 10;
    int nonconstRange = range;
    int mass[range];
    bool flag = false;

    for (int i = 0; i < range; i++)
    {
        cout << "введите элемет массива " << i + 1 << ": ";
        cin >> mass[i];
    }

    cout << "полученный массив равен: ";

    for (int i = 0; i < range; i++)
    {
        cout << mass[i] << " ";
    }

    for (int i = 0; i < range; i++)
    {
        nonconstRange -= 1;
        flag = true;
        for (int j = 0; j < nonconstRange; j++)
        {
            if (mass[j] > mass[j + 1])
            {
                flag = false;
                int x = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = x;
            }
        }
        if (flag == true)
        {
            break;
        }
        for (int j = nonconstRange - 1; j > 0; j--)
        {
            if (mass[j] < mass[j + -1])
            {
                flag = false;
                int x = mass[j];
                mass[j] = mass[j - 1];
                mass[j - 1] = x;
            }
        }
    }

    cout << "отсортированный массив равен: ";

    for (int i = 0; i < range; i++)
    {
        cout << mass[i] << " ";
    }
}
void zad1()
{
    int mass[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "введите элемет массива " << i + 1 << ": ";
        cin >> mass[i];
    }

    cout << "полученный массив равен: ";

    for (int i = 0; i < 10; i++)
    {
        cout << mass[i] << " ";
    }

    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 9; j++)
        {
            if (mass[j] > mass[j + 1])
            {
                int x = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = x;
            }
        }
    }
    cout << "отсортированный массив равен: ";

    for (int i = 0; i < 10; i++)
    {
        cout << mass[i] << " ";
    }
}
void zad3()
{
    int mass[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "введите элемет массива " << i + 1 << ": ";
        cin >> mass[i];
    }

    for (int i = 1; i < 10; i++)
    {
        if (mass[i] < mass[i-1])
        {
            int buffer = mass[i];
            mass[i] = mass[i - 1];
            mass[i - 1] = buffer;
            for (int x = i; x > 1; x--)
            {
                if (buffer < mass[x - 2])
                {
                    mass[x - 1] = mass[x - 2];
                    mass[x - 2] = buffer; //!
                }
                else
                {
                    mass[x - 1] = buffer;
                    break;
                }
            }

        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << mass[i] << " ";
    }

}
void zad4()
{
    int mass[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "введите элемет массива " << i + 1 << ": ";
        cin >> mass[i];
    }

    for (int i = 0; i < 10; i++)
    {
        int min = mass[i], pos = i;
        for (int x = 1 + i; x < 10; x++)
        {
            if (mass[x] < min)
            {
                min = mass[x];
                pos = x;
            }
        }
        mass[pos] = mass[i];
        mass[i] = min;
    }


    for (int i = 0; i < 10; i++)
    {
        cout << mass[i] << " ";
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
}
