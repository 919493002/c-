#include <stdio.h>
#include <string.h>

int max(int a, int b);

int sum() {
    int a, b, sum;
    a = 123;
    b = 123;
    sum = a + b;
    printf("sum is %d\n", sum);
    return sum;
}

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
int* f86() {
    int a[10];
    int* p;

    for (p = a; p < a + 10; p++) {
        scanf("%d", p);
    }

    for (p = a; p < a + 10; p++) {
        printf("%d", *p);
    }
    return p;
}

void f87(int* a, int n) {
    for (int* p = a, *q = a + n - 1, temp; p < q; p++, q--) {
        temp = *p;
        *p = *q;
        *q = temp;
    }
    for (int* p = a; p < a + 10; p++) {
        printf("%d    ", *p);
    }

}

void f10_1() {
    printf("plz input filename\n");
    char fileName[10], c;
    scanf("%s", fileName);
    getchar();
    FILE* file;
    if ((file = fopen(fileName, "w")) == NULL) {
        printf("cannot open file\n");
    }
    c = getchar();
    //    getchar();
    while (c != '#') {
        fputc(c, file);
        putchar(c);
        c = getchar();
        //        getchar();
    }
    fclose(file);
}

void f10_2() {
    FILE* outputFile, * inputFile;
    char c;
    char outputFileName[10], inputFileName[10];
    printf("plz write outputFileName\n");
    scanf("%s", outputFileName);
    printf("plz write inputFileName\n");
    scanf("%s", inputFileName);
    if ((outputFile = fopen(outputFileName, "r")) == NULL) {
        printf("cannot open file\n");
    }
    if ((inputFile = fopen(inputFileName, "w")) == NULL) {
        printf("cannot open file\n");
    }
    c = fgetc(outputFile);
    while (!feof(outputFile)) {
        fputc(c, inputFile);
        c = fgetc(outputFile);
    }
    fclose(outputFile);
    fclose(inputFile);
}

void f10_3() {
    char str[3][10], tmp[10];
    int k;
    FILE* file;
    gets(str[0]);
    gets(str[1]);
    gets(str[2]);
    //todo ***** ѡ������ ���ù�
    for (int i = 0; i < 3 - 1; ++i) {
        k = i;
        for (int j = i + 1; j < 3; ++j) {
            if (strcmp(str[k], str[j]) > 0) {
                k = j;
            }
        }
        if (k != i) {
            strcpy(tmp, str[i]);
            strcpy(str[i], str[k]);
            strcpy(str[k], tmp);
        }
    }
    if ((file = fopen("ddd.txt", "w")) == NULL) {
        printf("cannot open file");
        return;
    }
    for (int i = 0; i < 3; ++i) {
        fputs(str[i], file);
        fputs("\n", file);
        printf("%s\n", str[i]);
    }
    fclose(file);
}

void f10_5() {
    FILE* fp1, * fp2;
    char ch;
    fp1 = fopen("file1.dat", "r");
    fp2 = fopen("file2.dat", "w");
    ch = getc(fp1);
    while (!feof(fp1)) {
        putchar(ch);
        ch = getc(fp1);
    }
    putchar(ch);
    rewind(fp1);
    ch = getc(fp1);
    while (!feof(fp1)) {
        fputs(ch, fp2);
        ch = getc(fp1);
    }
}

void f9_1() {
    struct Student {
        long num;
        char name[10];
        char addr[20];
    }a = { 10101,"dsds","123456Neoakdlskl" };
    printf("num:%d\tname:%s\taddress:%s\n", a.num, a.name, a.addr);
}
void f9_2() {

    struct Student
    {
        int num;
        char name[20];
        float score;
    }student1, student2;

    scanf("%d%s%f", &student1.num, student1.name, &student1.score);
    scanf("%d%s%f", &student2.num, student2.name, &student2.score);
    printf("The higher score is:\n");
    if (student1.score>student2.score)
    {
        printf("%d %s %6.2f\n", student1.num, student1.name, student1.score);
    }
    else if(student1.score > student2.score)
    {
        printf("%d %s %6.2f\n", student2.num, student2.name, student2.score);
    }
    else
    {
        printf("%d %s %6.2f\n", student1.num, student1.name, student1.score);
        printf("%d %s %6.2f\n", student2.num, student2.name, student2.score);
    }
}

int main() {
    //    printf("Hello, World!\n");
    //    int max(int a, int b);
    //    int a, b, c;
    //    scanf(("%d,%d", &a, &b));
    //    c = max(a, b);
    //    printf("max=%d\n", c);
    //    printf("short:%d,int:%d,long:%d,longlong:%d",sizeof(short),sizeof(int),sizeof(long),sizeof(long long ));
    //    putchar(getchar() + 32);
    //    putchar('\n');
    //    int a[10] = {};
    //    for (int i = 0; i < 10; ++i) {
    //        printf("%d\n", a[i]);
    //    }
    //    return 0;
    //    int a[10];
    //    int *p;
    //
    //    for (p = a; p < a + 10; p++) {
    //        scanf("%d", p);
    //    }
    //    f87(a, 10);
    //    f10_1();
    //    f10_2();
    //    f10_3();
    //f9_1();
    f9_2();
}

