#include <stdio.h>
#include <stdlib.h>

int main()
 {
     int i , k, l, m;
     char first_name[20], last_name[20];
    printf("write your first name\n");
    scanf("%s", &first_name);
    printf("write your last name\n");
    scanf("%s", &last_name);
    i = strlen(first_name);
    k = strlen(last_name);
    printf("this is how to write your name backward\n");
    for(l = k; l>=0; l--){
        printf("%c",last_name[l]);
    }
    for(m = i; m >=0; m--){
    printf("%c",first_name[m]);
    }

    return 0;
}
