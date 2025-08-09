#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of a char: %lu byte(s)\n", sizeof(char));
    printf("Size of an int: %lu byte(s)\n", sizeof(int));
    printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
    /* printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int)); */ /* C90 desteklemez */
    printf("Si

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-size.c -o 6-size

./6-size

./6-size

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
    printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
    printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
    printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
    return (0);
}
























#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
    printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
    printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
    printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
    return (0);
}

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-size.c -o 6-size

Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a float: 4 byte(s)

cat << 'EOF' > 6-size.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
    printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
    printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
    printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
    return (0);
}
