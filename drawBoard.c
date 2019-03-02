#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<cs50.h>

void drawColumn(int);
void drawCell();
void drawRow(int);

int main(void)
{
    drawColumn(8);
    drawRow(3);
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

void drawColumn(int column)
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

void drawRow(int row)
{
    for(int rowCounter = 0; rowCounter<row; rowCounter++)
    {
        drawColumn();
    }
}
