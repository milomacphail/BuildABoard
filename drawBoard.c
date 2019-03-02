#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<cs50.h>

void drawBoard(int, int);

int main(void)
{
    drawBoard(4, 8);
}

void drawTop()
{
    printf(" __ ");
}

void drawWalls()
{
    printf("|  |");
}

void drawBottom()
{
    printf("+--+");
}

void drawBoard(int row, int column)
{
    for(int rowCounter = 0; rowCounter < row; rowCounter ++)
    {
        for(int columnCounter = 0; columnCounter < column; columnCounter++)
        {
            drawTop();
        }
        printf("\n");
        for(int wallCounter= 0; wallCounter <column; wallCounter++)
        {
            drawWalls();
        }
        printf("\n");
        for(int bottomCounter= 0; bottomCounter <column; bottomCounter++)
        {
            drawBottom();
        }
    printf("\n");
    }
}
