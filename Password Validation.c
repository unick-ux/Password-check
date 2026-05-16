#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    char pass [100];

    int hasdigit = 0;
    int hasupper = 0;
    int haslower = 0;
    int hasspecial= 0;

    printf("Enter the pass: ");
    scanf("%s",pass);

    int len = strlen(pass);

    if(len<10)
    {
        printf("Invalid\n");
        return 0;
    }


        for(int i=0;pass[i]!='\0';i++)
        {
            if(isdigit(pass[i]))
            {
                hasdigit = 1;
            }

            else if (isupper(pass[i]))
                {
                    hasupper = 1;
                }

            else if(islower(pass[i]))
            {
                haslower = 1;
            }

            else
            {
                hasspecial = 1;
            }

        }

    if(hasdigit && hasupper && haslower && hasspecial)
    {
        printf("\n");
        printf("Your password is Valid\n");
    }

    else
    {
        printf("Invalid password\n");
    }


    return 0;
}
