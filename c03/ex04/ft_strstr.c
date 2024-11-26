char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (to_find[j] =! '\0')
        {
            if (str[i+j] == to_find[j])
            {
                str[i] = to_find[j];

            j++;
            }
            str[i] = '\n';
        }
        return (str);
        i++;
    }
}

#include <stdio.h>
int main()
{
    char str[] = "Hello my name is Air.";
    char to_find[] = "my";
    printf("%s", ft_strstr(str, to_find));
}