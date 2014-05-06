#include <Stdio.h>

int main(void)
{
    char name[80];
    int count = 0;
    
    gets(name);
    puts(name);

    while (name[count] != NULL)
        ++count

    return 0;
}