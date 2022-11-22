#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD Pos;
    VOID WINAPI Sleep(DWORD dwMilliseconds);
    int arr[24][80];
    for(int i = 0; i < 24; i++){
        for(int j = 0; j < 80; j++){
        arr[i][j] = 0;
        }
    }


    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 80; j++){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            Pos.X = j;
            Pos.Y = i;
            SetConsoleCursorPosition(hout, Pos);
            printf("%d", arr[i][j]);
            Sleep(2);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
            Pos.X = 79-j;
            Pos.Y = 24-i-1;
            SetConsoleCursorPosition(hout, Pos);
            printf("%d", arr[23-i][79-j]);
            Sleep(2);
        }
        i++;
        for(int j = 0; j < 80; j++){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            Pos.X = 79-j;
            Pos.Y = i;
            SetConsoleCursorPosition(hout, Pos);
            printf("%d", arr[i][79-j]);
            Sleep(2);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
            Pos.X = j;
            Pos.Y = 23-i;
            SetConsoleCursorPosition(hout, Pos);
            printf("%d", arr[23-i][j]);
            Sleep(2);
        }
    }
    Pos.X = 0;
    Pos.Y = 25;
    SetConsoleCursorPosition(hout, Pos);
}
