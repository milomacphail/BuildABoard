#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main (int argc, char* argv[])
{
    char* str1 = argv[1];
    char* str2 = argv[2];
    char* compareStrings(str1, str2);
}


int compareStrings (char* str1, char* str2)
{

int stringLength =  strlen(str1);

for (int i = 0; i < stringLength; i++)
{
        int result = str1[i] - str2[i];
        return result;
}
    printf("%i ", result);
}




