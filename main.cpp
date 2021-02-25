#include <iostream>
using namespace std;

int main() {
    char table[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            table[i][j] = '_';
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << table[i][j] << " ";
        }
        cout << endl; // end line - конец строки
    }

    bool player = true; // true - player 1, false - player 2

    for (int i = 0; i < 9; i++){
        int x, y;
        cout << "Input X: ";
        cin >> x;
        cout << "Input Y: ";
        cin >> y;
        if (player){
            table[x - 1][y - 1] = 'X';
            player = false;
        } else {
            table[x - 1][y - 1] = 'O';
            player = true;
        }
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cout << table[i][j] << " ";
            }
            cout << endl; // end line - конец строки
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << table[i][j] << " ";
        }
        cout << endl; // end line - конец строки
    }

    return 0;
}
// тип(char) название(имя переменной)[размер];
// x = input("Введите x: ")