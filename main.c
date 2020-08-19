
#include <string.h>
#include "strings_functions.h"

int main()
{
    char s1[]="embedded system",s2[]="course";
    char s3[]="";
    char s4[]="elahly",s5[]="elahly";

    printf("%i\n",str_len(s1));
    printf("=====================\n");

    printf("%s\n",str_cat(s1,s2));
    printf("=====================\n");

    printf("%i\n",str_cmp(s1,s2));
    printf("=====================\n");

    str_cpy(s3,s2);
    printf("%s\n",s3);
    printf("=====================\n");

    char* ptr = str_chr(s1,'d');
    if (ptr)
        printf("%d\n",ptr-s1);
    printf("=====================\n");

    printf("%s\n",str_ncat(s1,s2,4));
    printf("=====================\n");

    printf("%i\n",str_ncmp(s5,s4,6));
    printf("=====================\n");

    char* ptr1 = str_rchr(s1,'d');
    if (ptr1)
        printf("%d\n",ptr1-s1);

    return 0;
}
