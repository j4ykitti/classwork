#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
int main()
{
    int i;
    struct player
    {
        char name[50];
        int level;
        int score;
    };
    struct player playerlist[5];
    for (i = 0; i < 5; i++)
    {
        scanf("%s %d %d", &playerlist[i].name, &playerlist[i].level, &playerlist[i].score);
    }
    FILE *fp;
    fp = fopen("datatest.txt", "w");
    for (i = 0; i < 5; i++)
    {
        fprintf(fp, "%s %d %d\n", playerlist[i].name, playerlist[i].level, playerlist[i].score);
    }
    fclose(fp);
    return 0;
}