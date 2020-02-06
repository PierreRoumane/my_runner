/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** reverse
*/

int my_strlen(char *str);

char *my_strcpy(char *str, char *str2);

char *my_revstr(char *str)
{
    int i2 = 0;
    int i = my_strlen(str);
    char str2[i];

    while (str[i2] != '\0')
    {
        str2[i2] = str[i];
        i2 = i2 + 1;
        i--;
    }
    str2[i2] = '\n';
    str2[i2 + 1] = '\0';
    return (str);
}

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    i--;
    return (i);
}