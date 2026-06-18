#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strukturi i masivi ot strukturi
//struct identif.
// tip ident_el
struct Books{
    char title[40];
    char author[20];
    char tema[30];
    int id_book;
};
//2ra structura
typedef struct Person{
    char name[50];
    int citNo;
    float salary;
}person;

//3 structura s vlojena
struct complex{
    int imag;
    int real;
};
struct number{
    struct complex comp;
    int integer;
}num1;

//4
#define N 20
typedef struct{
    char ime[30];
    long fnum;
    int grup;
    float ocenka;
}STD;

void my_line_flush(){
    int ch;
    while((ch=getchar())!='\n'&& ch!=EOF);
}
STD inputStd(void)
{
    STD a;
    printf("Ime: ");
    my_line_flush();
    gets(a.ime);
    printf("Nomer: ");
    scanf("%ld",&a.fnum);
    printf("Grupa: ");
    scanf("%d",&a.grup);
    printf("Ocenka: ");
    scanf("%f",%a.ocenka);
    return(a);
}
void outputStd(STD)
{
    printf("Ime:%s",a.ime);
    printf("\nNomer:%ld\n",a.fnum);
    printf("Grupa:%d\n",a.grup);
    printf("Ocenka:%2f\n",a.ocenka);

}
void uspeh(STD s[N],int br)
{
    float sum=0.0;
    int gr=0;
    int key;
    printf("Vuvedete nomer na grupa: ");
    scanf("%d",&key);
    for(int i=0;i<br;i++)
        if(s[i].grup==key)
        {
            sum+=s[i].ocenka;
            gr++;
        }
        if(gr>0)
            printf("Sreden uspeh ot studenti ot %d grupa: %2f\n",key,sum/gr);
        else
            printf("niama studenti ot grupa%d\n",key);
}


void print_info(struct Books *book)
{
    printf("Title of the book is: %s",book->title);
    printf("Author of the book is: %s",book->author);
    printf("Tema of the book is: %s",book->tema);
    printf("ID of the book is: %d",book->id_book);
}
void print_info_second(struct Person *p)
{
    printf("Name of the person is: %s",p->title);
    printf("CitNo of the person is: %s",p->author);
    printf("Salary of the person is: %s",p->tema);
}

int main()
{
    struct Books book1;
    struct Books book2;


    strcpy(book1.title, "The C Programming Language");
    strcpy(book1.author, "Dennis Ritchie");
    strcpy(book1.tema, "Education");
    book1.id_book = 12345;

    strcpy(book2.title, "The Python Programming Language");
    strcpy(book2.author, "Guido van Rossum");
    strcpy(book2.tema, "Education");
    book2.id_book = 123456;

    print_info(&book1);
    print_info(&book2);

    //2 structura
    person p1;
    strcpy(p1.name,"George Orwell");
    p1.citNo=1984;
    p1.salry=1015.2;

    print_info_second(&p1);

    //3 struktura
    num1.comp.imag=11;
    num1.comp.real=5.25;
    num1.integer=6;

    //4
    int i=0;
    int num=0;
    int sum=0;
    STD s[n];
    do{
        printf("Vuvedete broi studenti(maksimum do %d): ",N);
        scanf("%d",&num);
    }while((num>N)||(num<=0));
    for(i=0;i<num;i++)
        s[i]=inputStd();
    printf("\nSpisuk na studenti\n");
    for(i=0;i<num;i++)
        outputStd(s[i]);
    uspeh(s,num);
    return 0;
}
