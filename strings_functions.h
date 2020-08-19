#include <stdio.h>
#include <stdlib.h>

/*
Function Name        : str_len
Function Returns     : the length of string
Function parameters  : char array
Function Description : measure the length if the string
*/

int str_len(const char *s);

/*
Function Name        : str_cat
Function Returns     : char array
Function parameters  : char array,char array
Function Description : combine between the two strings and return one string
*/

char *str_cat(char *s1, const char *s2);

/*
Function Name        : str_cmp
Function Returns     : int
Function Arguments   : char array,char array
Function parameters  : return zero when two strings are equal,positive when
                       first string have ascii number bigger, negative when
                       second string have ascii number bigger
*/

int str_cmp(const char *s1, const char *s2);

/*
Function Name        : str_cpy
Function Returns     : char array
Function parameters  : char array,char array
Function Description : copy the second string to the first string
*/

char *str_cpy(char *s1, const char *s2);

/*
Function Name        : str_chr
Function Returns     : pointer char to the first appearance
Function parameters  : char array,char
Function Description : return pointer char to the first appearance of the char
*/

char *str_chr(const char *s, int c);

/*
Function Name        : str_ncat
Function Returns     : char array
Function parameters  : char array,char array,and size
Function Description : combine between the first the first string and the second string with limit n and return one string
*/

char *str_ncat(char *s1, const char *s2, int n);

/*
Function Name        : str_ncmp
Function Returns     : int
Function parameters  : char array,char array,and size
Function Description : compare between the first the first string and the second string with limit n and
                       return zero when two strings are equal,positive when first string have ascii number
                       bigger, negative when second string have ascii number bigger
*/

int str_ncmp(const char *s1, const char *s2, int n);

/*
Function Name        : str_rchr
Function Returns     : pointer char to the last appearance
Function parameters  : char array,char
Function Description : return pointer char to the last appearance of the char
*/

char *str_rchr(const char *s, int c);
