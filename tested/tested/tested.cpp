// tested.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


void print(string base)
{
    //for (int a = 0; a < 3; a++)
    //{
    //    for (int b = 0; b < 3; b++)
    //    {
    //        cout << base[a][b] << " ";
    //    }
    //    cout << endl;
    //}
}
int main()
{
    setlocale(LC_ALL, "RU");

    cout << "Крестики нолики:\n";
    char base[3][3] = { {' = ',' = ' ,' = '},
                        {' = ',' = ' ,' = '},
                        {' = ',' = ' ,' = '} };
    //int base[3][3] = { { 0, 0, 0},
    //                   { 0, 0, 0},
    //                   { 0, 0, 0} };
    cout << "Игровое поле на данный момент:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" = ", base[3][3]);
        }
        cout << endl;
    }
    char abc = '=';
    cout << abc;
    cout << "Ход 'X'";
    cout << "Введите номер клетки по вертикали:";
    int first;
    cin >> first;
    cout << "Введи номер клетки по горизонтали:";
    int second;
    cin >> second;
    char player;
    if (base[first][second] == ' X ')
        base[first][second] = player;
    else
        cout << "Клетка занята";

    cout << "Игровое поле на данный момент:" << endl;

    //for (int a = 0; a < 3; a++)
    //{
    //    for (int b = 0; b < 3; b++)
    //    {
    //        cout << base[a][b] << " ";
    //    }
    //    cout << endl;
    //}
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << base[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Ход 'O'";
    cout << "Введите номер клетки по вертикали:";
    int first1;
    cin >> first1;
    cout << "Введи номер клетки по горизонтали:";
    int second1;
    cin >> second1;
    base[first1][second1] = 'X';
}