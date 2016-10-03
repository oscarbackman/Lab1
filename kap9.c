#include<stdio.h>


#if 1
//9.2
int stringlength (const char string[])
{
    int count = 0;
    
    while (string[count] != '\0')
        ++count;
    return count;
}

int main(void)
{
    int stringLength(const char string[]);
    const char word1[] = {'a','s','t','e','r','\0'};
    const char word2[] = {'a','t','\0'};
    const char word3[] = {'a','w','e','\0'};
    
    printf("%i    %i    %i\n",stringlength(word1),stringlength(word2),stringlength(word3));
    return 0;
}
#endif

int main(void)
    //9.4
{
//    char test[] = {'h','e','l','l','o','\0'};
    int i =0,count =0,start;
    char result;
    char source[] = {'h','e','l','l','o','\0'};
    start = 2;
    count = 2;
    
    
 /*   while (test[i] != '\0')
    {
        
        printf("%c",test[i]);
        ++i;
        ++count;
    };*/
    substring(char source,int start,int count, char result);

    return 0;    
    
}

substring(char source,int start,int count, char result){
    printf("Substring here! :%c \n",source[0]);
    int i;
    printf("count: %i\n",count);
    for (i = start ; count+start >= i   ; ++i ){
        //printf("%c\n",source[i]);
    }
    return 0;
}



#endif



#if 0
//9.5
int main(void)
{
    char s1[81],s2[81],s3[81];
    printf("Enter text: \n");
    
    scanf("%s%s%s",s1,s2,s3);
    
    printf("\ns1 = %s \ns2= %s, \ns3 = %s\n",s1,s2,s3);
    return 0;
}



#endif
