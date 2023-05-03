#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 8
/**
 * main: password change
 *
 * Return: 0
 */
int main(void)
{
char charset[] = "abcdefghijklmnopqrstuvwxyz";
srand(time(NULL));
char password[PASSWORD_LENGTH + 1];
for (int i = 0; i < PASSWORD_LENGTH; i++)
{
int index = rand() % (sizeof(charset) - 1);
password[i] = charset[index];
}
password[PASSWORD_LENGTH] = '\0';
printf("Generated password: %s\n", password);
return (0);
}
