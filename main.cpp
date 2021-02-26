#include <iostream>
#include <vector>
using namespace std;

//тип название_функции(аргументы функции){}
char winner(char table[3][3]){
    if ((table[0][0] == table[1][1]) &&
            (table[1][1] == table[2][2]) &&
            (table[1][1] != '_')){
        if (table[0][0] == 'X')
            return 'X';
        else
            return 'O';
    }
    for (int i = 0; i < 3; ++i){
        if ((table[i][0] == table[i][1]) &&
        (table[i][1] == table[i][2]) &&
                ((table[i][1] != '_'))){
            if (table[i][0] == 'X')
                return 'X';
            else
                return 'O';
        }
        if ((table[0][i] == table[1][i]) && (table[1][i] == table[2][i]) &&
                (table[1][i] != '_')){
            if (table[0][i] == 'X')
                return 'X';
            else
                return 'O';
        }
    }
    return '_';
}

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

    while (true){
        int x, y;
        cout << "Input X: ";
        cin >> x;
        cout << "Input Y: ";
        cin >> y;
        if (table[x - 1][y - 1] != '_'){
            cout << "Input new X and Y" << endl;
            continue;
        }
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
        if (winner(table) == 'X'){
            cout << "PLAYER 1 IS WIN" << endl;
            break;
        } else if (winner(table) == 'O'){
            cout << "PLAYER 2 IS WIN" << endl;
            break;
        }

        bool flag = false;

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j){
                if (table[i][j] == '_')
                    flag = true;
            }
        }
        if (!flag)
            break;
    }

    /*
     * to do smt
    0 0 1
    1 1 0
    0 1 0 => выход из цикла
     */
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << table[i][j] << " ";
        }
        cout << endl; // end line - конец строки
    }
    return 0;
}

// тип название = начальное_значение;
//
