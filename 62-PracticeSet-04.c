#include <stdio.h>
int occur(char st[], char c){
    char *ptr = st; 
    int count=0;
    while(*ptr!='\0'){
        if (*ptr==c){
            count++;
        }
    ptr++;
    }return count;
}
int main()
{
    char st[] = "Yash";
    int count = occur(st, 'Y');
    printf("Occurences = %d", count);
    return 0;
} 