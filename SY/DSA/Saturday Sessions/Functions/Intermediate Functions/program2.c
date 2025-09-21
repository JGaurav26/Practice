// PS - Program to find the length of the string (with string.h)

#include <stdio.h>
#include <string.h>

void wslen()
{
    printf("---------------------------------------\n");
    printf("With the <string.h> header file \n");
    char string1[] = "Aman";  
    size_t len = strlen(string1);

    printf("Length of the string \"%s\" = %lu\n", string1, len);
    printf("---------------------------------------\n");
}

void slen()
{
    printf("---------------------------------------\n");
    printf("Without the <string.h> header file \n");
    char string1[] = "Aman";
    int length = 0;

    // loop until null terminator '\0'
    while (string1[length] != '\0')
    {
        length++;
    }

    printf("Length of the string \"%s\" = %d\n", string1, length);
    printf("---------------------------------------\n");
}


int main()
{
    wslen();
    slen();
    return 0;
}