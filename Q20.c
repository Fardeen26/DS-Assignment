#include<stdio.h>

int main()
{
    char str[] = "fardeenalimansuri";
    char temp[26] = {0};

    int size=0, index=0;

    while(str[index]!='\0'){
        size++;
        index++;
    }

    for(int i=0; i<size; i++) {
        temp[str[i]-'a']++;
    }

    printf("Duplicate elements are: ");
    for(int i=0; i<26; i++) {
        if(temp[i]>1){
            printf("%c ", 'a'+i);
        }
    }

    return 0;
}