#include <bits/stdc++.h>
using namespace std;

int a[5][5], cnt;

int check()
{
    int i, j, flag;
    flag = 0;
    for (i = 1; i < 4; i++) {
        if ((a[i][1] == 1) && (a[i][2] == 1) && (a[i][3] == 1)) {
            flag = 1;
            break;
        }
        if ((a[i][1] == 2) && (a[i][2] == 2) && (a[i][3] == 2)) {
            flag = 2;
            break;
        }
        if ((a[1][i] == 1) && (a[2][i] == 1) && (a[3][i] == 1)) {
            flag = 1;
            break;
        }
        if ((a[1][i] == 2) && (a[2][i] == 2) && (a[3][i] == 2)) {
            flag = 2;
            break;
        }
    }
    if ((a[1][1] == 1) && (a[2][2] == 1) && (a[3][3] == 1)) {
        flag = 1;
    }
    if ((a[1][1] == 2) && (a[2][2] == 2) && (a[3][3] == 2)) {
        flag = 2;
    }
    if ((a[1][3] == 1) && (a[2][2] == 1) && (a[3][1] == 1)) {
        flag = 1;
    }
    if ((a[1][3] == 2) && (a[2][2] == 2) && (a[3][1] == 2)) {
        flag = 2;
    }
    return flag;
}

int comp_move()
{
    int i, j, x, y, flag;
    flag = 0;
    if (!a[2][2]) {
        x = y = 2;
    }
    else {
        for (i = 1; i < 4; i++) {
            if ((a[i][1] == 1) && (a[i][2] == 1) && (!a[i][3])) {
                flag = 1;
                x = i;
                y = 3;
            }
            else if ((a[i][1] == 1) && (a[i][3] == 1) && (!a[i][2])) {
                flag = 1;
                x = i;
                y = 2;
            }
            else if ((a[i][3] == 1) && (a[i][2] == 1) && (!a[i][1])) {
                flag = 1;
                x = i;
                y = 1;
            }
            else if ((a[1][i] == 1) && (a[2][i] == 1) && (!a[3][i])) {
                flag = 1;
                x = 3;
                y = i;
            }
            else if ((a[1][i] == 1) && (a[3][i] == 1) && (!a[2][i])) {
                flag = 1;
                x = 2;
                y = i;
            }
            else if ((a[2][i] == 1) && (a[3][i] == 1) && (!a[1][i])) {
                flag = 1;
                x = 1;
                y = i;
            }
        }
        if ((a[1][1] == 1) && (a[2][2] == 1) && (!a[3][3])) {
            flag = 1;
            x = 3;
            y = 3;
        }
        else if ((a[1][1] == 1) && (a[3][3] == 1) && (!a[2][2])) {
            flag = 1;
            x = 2;
            y = 2;
        }
        else if ((a[2][2] == 1) && (a[3][3] == 1) && (!a[1][1])) {
            flag = 1;
            x = 1;
            y = 1;
        }
        else if ((a[1][3] == 1) && (a[2][2] == 1) && (!a[3][1])) {
            flag = 1;
            x = 3;
            y = 1;
        }
        else if ((a[1][3] == 1) && (a[3][1] == 1) && (!a[2][2])) {
            flag = 1;
            x = 2;
            y = 2;
        }
        else if ((a[2][2] == 1) && (a[3][1] == 1) && (!a[1][3])) {
            flag = 1;
            x = 1;
            y = 3;
        }
        for (i = 1; i < 4; i++) {
            if ((a[i][1] == 2) && (a[i][2] == 2) && (!a[i][3])) {
                flag = 2;
                x = i;
                y = 3;
            }
            else if ((a[i][1] == 2) && (a[i][3] == 2) && (!a[i][2])) {
                flag = 2;
                x = i;
                y = 2;
            }
            else if ((a[i][3] == 2) && (a[i][2] == 2) && (!a[i][1])) {
                flag = 2;
                x = i;
                y = 1;
            }
            else if ((a[1][i] == 2) && (a[2][i] == 2) && (!a[3][i])) {
                flag = 2;
                x = 3;
                y = i;
            }
            else if ((a[1][i] == 2) && (a[3][i] == 2) && (!a[2][i])) {
                flag = 2;
                x = 2;
                y = i;
            }
            else if ((a[2][i] == 2) && (a[3][i] == 2) && (!a[1][i])) {
                flag = 2;
                x = 1;
                y = i;
            }
        }
        if ((a[1][1] == 2) && (a[2][2] == 2) && (!a[3][3])) {
            flag = 2;
            x = 3;
            y = 3;
        }
        else if ((a[1][1] == 2) && (a[3][3] == 2) && (!a[2][2])) {
            flag = 2;
            x = 2;
            y = 2;
        }
        else if ((a[2][2] == 2) && (a[3][3] == 2) && (!a[1][1])) {
            flag = 2;
            x = 1;
            y = 1;
        }
        else if ((a[1][3] == 2) && (a[2][2] == 2) && (!a[3][1])) {
            flag = 2;
            x = 3;
            y = 1;
        }
        else if ((a[1][3] == 2) && (a[3][1] == 2) && (!a[2][2])) {
            flag = 2;
            x = 2;
            y = 2;
        }
        else if ((a[2][2] == 2) && (a[3][1] == 2) && (!a[1][3])) {
            flag = 2;
            x = 1;
            y = 3;
        }
        if (!flag) {
            if (((a[1][2] == 1) || (a[2][1] == 1)) && (!a[1][1])) {
                flag = 3;
                x = 1;
                y = 1;
            }
            else if (((a[1][2] == 1) || (a[2][3] == 1)) && (!a[1][3])) {
                flag = 3;
                x = 1;
                y = 3;
            }
            else if (((a[3][2] == 1) || (a[2][1] == 1)) && (!a[3][1])) {
                flag = 3;
                x = 3;
                y = 1;
            }
            else if (((a[2][3] == 1) || (a[3][2] == 1)) && (!a[3][3])) {
                flag = 3;
                x = 3;
                y = 3;
            }
            else {
                if (((a[1][1] == 1) || (a[1][3] == 1)) && (!a[1][2])) {
                    x = 1;
                    y = 2;
                }
                else if ((a[1][1] == 1) && (!a[2][1])) {
                    x = 2;
                    y = 1;
                }
                else if ((a[1][3] == 1) && (!a[2][3])) {
                    x = 2;
                    y = 3;
                }
                else if ((a[3][3] == 1) && (!a[3][2])) {
                    x = 3;
                    y = 2;
                }
                else if ((a[3][3] == 1) && (!a[2][3])) {
                    x = 2;
                    y = 3;
                }
                else if ((a[3][1] == 1) && (!a[2][1])) {
                    x = 2;
                    y = 1;
                }
                else if ((a[3][1] == 1) && (!a[3][2])) {
                    x = 3;
                    y = 2;
                }
                else {
                    for (i = 1; i < 4; i++) {
                        for (j = 1; j < 4; j++) {
                            if (!a[i][j]) {
                                flag = 3;
                                x = i;
                                y = j;
                                break;
                            }
                        }
                        if (flag == 3) {
                            break;
                        }
                    }
                }
            }
        }
    }
    if (cnt == 4) {
        if (((a[2][2] == 2) && (a[1][3] == 2) && (a[2][3] == 1) && (a[3][1] == 1)) || ((a[2][2] == 2) && (a[3][1] == 2) && (a[3][2] == 1) && (a[1][3] == 1))) {
            x = 1;
            y = 1;
        }
        else if (((a[2][2] == 2) && (a[1][1] == 2) && (a[2][1] == 1) && (a[3][3] == 1)) || ((a[2][2] == 2) && (a[3][3] == 2) && (a[3][2] == 1) && (a[1][1] == 1))) {
            x = 1;
            y = 3;
        }
        else if (((a[2][2] == 2) && (a[1][1] == 2) && (a[3][3] == 1) && (a[1][2] == 1)) || ((a[2][2] == 2) && (a[3][3] == 2) && (a[1][1] == 1) && (a[2][3] == 1))) {
            x = 3;
            y = 1;
        }
        else if (((a[2][2] == 2) && (a[1][3] == 2) && (a[1][2] == 1) && (a[3][1] == 1)) || ((a[2][2] == 2) && (a[3][1] == 2) && (a[2][1] == 1) && (a[1][3] == 1))) {
            x = 3;
            y = 3;
        }
    }
    a[x][y] = 2;
    cout << x << " " << y << endl;
    return flag;
}

void draw()
{
    int i, j;
    for (i = 1; i < 3; i++) {
        for (j = 1; j < 3; j++) {
            if (!a[i][j]) {
                cout << " -";
            }
            else if (a[i][j] == 1) {
                cout << " O";
            }
            else {
                cout << " X";
            }
            // printf("%2d", a[i][j]);
            cout << " |";
        }
        if (!a[i][j]) {
            cout << " -" << endl;
        }
        else if (a[i][j] == 1) {
            cout << " O" << endl;
        }
        else {
            cout << " X" << endl;
        }
        // printf("%2d\n", a[i][j]);
        cout << "-----------\n";
    }
    for (j = 1; j < 3; j++) {
        if (!a[i][j]) {
            cout << " -";
        }
        else if (a[i][j] == 1) {
            cout << " O";
        }
        else {
            cout << " X";
        }
        // printf("%2d", a[i][j]);
        cout << " |";
    }
    if (!a[i][j]) {
        cout << " -" << endl;
    }
    else if (a[i][j] == 1) {
        cout << " O" << endl;
    }
    else {
        cout << " X" << endl;
    }
    // printf("%2d\n", a[i][j]);
}

int main()
{
    int x, y, start, i, j, v;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            a[i][j] = 0;
        }
    }
    cout << "Who Plays First?" << endl;
    draw();
    cout << "Type 1 for Player\nType 2 for Computer\n";
    cin >> start;
    cnt = 0;
    if (start == 1) {
        // cout << "check = " << check << endl;
        while (!check() && cnt < 9) {
            cout << "Your Move:\n";
            cin >> x >> y;
            a[x][y] = 1;
            cnt++;
            draw();
            if (check() == 1) {
                cout << "Congrats! You Win" << endl;
            }
            else {
                if (cnt < 9) {
                    cout << "Computer Moves:" << endl;
                    comp_move();
                    cnt++;
                    draw();
                    if (check() == 2) {
                        cout << "Computer Wins!" << endl;
                    }
                }
                else {
                    // draw();
                    cout << "Game Draws!" << endl;
                }
            }
        }
    }
    else {
        while (!check() && cnt < 9) {
            cout << "Computer Moves:" << endl;
            comp_move();
            cnt++;
            draw();
            if (check() == 2) {
                cout << "Computer Wins!" << endl;
            }
            else {
                if (cnt < 9) {
                    cout << "Your Move:\n";
                    cin >> x >> y;
                    a[x][y] = 1;
                    cnt++;
                    draw();
                    if (check() == 1) {
                        cout << "Congrats! You Win" << endl;
                    }
                }
                else {
                    // draw();
                    cout << "Game Draws!" << endl;
                }
            }
        }
    }
    return 0;
}