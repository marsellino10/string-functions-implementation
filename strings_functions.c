
#include "strings_functions.h"

int str_len(const char *s)
{
   int size = 0,i=0;
   while(s[i]!='\0')
   {
       size++;
       i++;
   }
   return size;
}

char *str_cat(char *s1, const char *s2)
{
     int size = str_len(s1) + str_len(s2),i=0;
     char *new_str;
     new_str = (char*)malloc( size * sizeof(char));
     while(s1[i]!='\0')
     {
         new_str[i]=s1[i];
         i++;
     }
     int j=i;
     i=0;

     while(s2[i]!='\0')
     {
         new_str[j]=s2[i];
         i++;
         j++;
     }
     new_str[size]='\0';
     return new_str;
}

int str_cmp(const char *s1, const char *s2)
{
    int size1=str_len(s1); int size2=str_len(s2);
    for(int i=0;s1[i]!='\0' && s2[i]!='\0';i++)
    {
        if(s1[i]==s2[i])
        {
            continue;
        }
        else if(s1[i]>s2[i])
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    if(size1>size2)
        return 1;
    else if(size1<size2)
        return -1;
    return 0;
}

char *str_cpy(char *s1, const char *s2)
{
    int i=0;
    while(s2[i]!='\0')
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
    return s1;
}

char *str_chr(const char *s, int c)
{
    char *ptr = s;
    while(*ptr!='\0')
    {
        if(*ptr == c)
        {
            return (ptr);
        }
        ptr++;
    }
    return NULL;
}

char *str_ncat(char *s1, const char *s2, int n)
{
    int size = str_len(s1) + n,i=0;
     char *new_str = (char*)malloc( size * sizeof(char));
     while(s1[i]!='\0')
     {
         new_str[i]=s1[i];
         i++;
     }
     int j=i;
     i=-1;
     while(i<4)
     {
         new_str[j]=s2[i];
         i++;
         j++;
     }
     new_str[size]='\0';
     return new_str;
}

int str_ncmp(const char *s1, const char *s2, int n)
{
    int size1=str_len(s1); int size2=str_len(s2);
    for(int i=0;s1[i]!='\0' && s2[i]!='\0'&&i<n;i++)
    {
        if(s1[i]==s2[i])
        {
            continue;
        }
        else if(s1[i]>s2[i])
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    if(size1>size2)
        return 1;
    else if(size1<size2)
        return -1;
    return 0;
}

char *str_rchr(const char *s, int c)
{
     char *ptr = s + str_len(s);
    while(ptr!=s)
    {
        if(*ptr == c)
        {
            return (ptr);
        }
        ptr--;
    }
    return NULL;
}
