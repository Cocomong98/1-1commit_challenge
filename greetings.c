/*

    Compilation:
        on Windows: gcc greetings.c Console.c -D_WINDOWS
        on MAC: gcc greetings.c Console.c -D_MAC

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#include "Console.h"

#define MAX_CHAR 256

typedef struct  {
    char ch;
    int start_x, start_y;
    int target_x, target_y;
    int cur_x, cur_y;
} CharCoord;

char Messages[][256] = {
    "Merry Christmas and Happy New Year!",
    "I love you! God loves you!",
    "God loves you and has a wonderful plan for your life!",
    "You are a masterpiece of God!",
    "Everything\'s gonna be okay!"
};
int no_message = 5;

int MakeCharCoord(char string[], int screen_width, int screen_height, CharCoord coord[], int max_char);
void MoveCharCoord(CharCoord *coord, int current_time, int end_time);

int main()
{
    srand(time(NULL));

    int screen_width = getWindowWidth();
    int screen_height = getWindowHeight() - 1;

    clrscr();
    gotoxy(1, 1);
    printf("screen size = %d x %d\n", screen_width, screen_height);
    printf("Press ESC to end.\n");
    MyPause();

    EnableCursor(0);

    CharCoord char_coord[MAX_CHAR];
    int no_char = 0;
    char key = 0;
    do {
        clrscr();

        char *message = Messages[rand() % no_message];
        no_char = MakeCharCoord(message, screen_width, screen_height, char_coord, MAX_CHAR);

        int end_time = 100;
        for(int t = 0; t <= end_time; t++){
            for(int i = 0; i < no_char; i++){
                gotoxy(char_coord[i].cur_x, char_coord[i].cur_y);
                putchar(' ');

                MoveCharCoord(&char_coord[i], t, end_time);

                gotoxy(char_coord[i].cur_x, char_coord[i].cur_y);
                putchar(char_coord[i].ch);

                if(kbhit()){
                    key = getch();
                    if(key == 27){
                        t = end_time + 1;
                        break;
                    }
                }
            }

            if(key != 27){                
                fflush(stdout);
                MySleep(20);
            }
        }

        gotoxy((screen_width - strlen(message)) / 2, screen_height / 2);
        puts(message);

        if(key != 27)
            MySleep(2000);
    } while(key != 27);     // 27: ESC

    EnableCursor(1);

    gotoxy(1, screen_height);

    return 0;
}

int MakeCharCoord(char string[], int screen_width, int screen_height, CharCoord coord[], int max_char)
{
    int i = 0;
    int no_char = 0;

    int sx = (screen_width - strlen(string)) / 2;
    int sy = screen_height / 2;
    for(i = 0; no_char < max_char && string[i]; i++){
        if(!isspace(string[i])){
            coord[no_char].ch = string[i];
            coord[no_char].start_x = rand() % screen_width + 1;
            coord[no_char].start_y = rand() % screen_height + 1;
            coord[no_char].target_x = sx + i;
            coord[no_char].target_y = sy;
            coord[no_char].cur_x = coord[no_char].start_x;
            coord[no_char].cur_y = coord[no_char].start_y;
            no_char++;
        }
    }

    return no_char;
}

void MoveCharCoord(CharCoord *coord, int current_time, int end_time)
{
    coord->cur_x = ((end_time - current_time) * coord->start_x + current_time * coord->target_x) / end_time;
    coord->cur_y = ((end_time - current_time) * coord->start_y + current_time * coord->target_y) / end_time;
}
