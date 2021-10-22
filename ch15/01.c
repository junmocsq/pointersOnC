#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

void binread (void);
int main(void){
    errno = 0;
    FILE *f = fopen("test.txt","r");
    printf("%d %s\n",errno,strerror(errno));
    if(f==NULL){
        perror("test1.txt");
        exit(EXIT_FAILURE);
    }
    int ch;
    for(int i=0;i<10;i++){
        ch = fgetc(f);
        putchar(ch);
    }
    putchar('\n');
    for(int i=0;i<10;i++){
        ungetc(ch+1,f);
    }
    for(int i=0;i<20;i++){
        ch = fgetc(f);
        
        putchar(ch);
    }
    putchar('\n');
    fseek(f,-5,SEEK_END);
    printf("pos:%ld\n",ftell(f));
    char temp[100];
    puts(fgets(temp,100,f));
    fclose(f);
    // char cc[100];
    // fgets(cc,100,stdin);
    // puts(cc);

    binread();
    return 0;
}

void binread (void){
    struct tt {
        int a;
        char b;
        int arr[10]
    };

    struct tt t = {1000,'A',{1,2,3,4,5,6,7,8,9,10}};

    FILE *f1 = fopen("bin.txt","w");
    fwrite(&t,sizeof(struct tt ),1,f1);
    fclose(f1);
    f1 = fopen("bin.txt","r");
    struct tt t2;
    fread(&t2,sizeof(t2),1,f1);
    fclose(f1);
    printf("%d %c %d\n",t2.a,t2.b,t2.arr[9]);
}