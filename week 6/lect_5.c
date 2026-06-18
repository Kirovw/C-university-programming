#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    /*
    typedef struct Student{
    char *name;
    char fac_num[20];
    int group;
    double grade;
    }student;//students[10];
    strcpy(student.name,"Ivan");
    student.group=58;
    student.grade=4.58;

    Student student;
    student.name=(char*)malloc(20);
    */
    typedef struct{
        char name[30];
        int age;
        char fac_num[11];
        double grade;
    }Student;

    FILE *file=fopen("students.bin","wb");
    if(file==(NULL)){
       exit(1);
    }

    Student students[3];
    Student student;
    Student *studentP=&student;
    student.name=(char*)malloc(20);
    student.fac_num=(char*)malloc(11);
    strcpy(studentP->name,"Ivan");
    strcpy(studentP->fac_num,"12124568971");
    studentP->age=20;
    studentP->grade=4.56;
    students[0]=student;

    //1
    Student student_2;
    Student *studentP2=&student_2;
    student.name=(char*)malloc(20);
    student.fac_num=(char*)malloc(11);
    strcpy(studentP2->name,"Ivan");
    strcpy(studentP2->fac_num,"12124568971");
    studentP2->age=20;
    studentP2->grade=4.56;
    students[1]=student_2;
    //2
    Student student_3;
    Student *studentP3=&student_3;
    student.name=(char*)malloc(20);
    student.fac_num=(char*)malloc(11);
    strcpy(studentP3->name,"Ivan");
    strcpy(studentP3->fac_num,"12124568971");
    studentP3->age=20;
    studentP3->grade=4.56;
    students[2]=student_3;
    //3
    Student student_4;
    Student *studentP4=&student_4;
    student.name=(char*)malloc(20);
    student.fac_num=(char*)malloc(11);
    strcpy(studentP4->name,"Ivan");
    strcpy(studentP4->fac_num,"12124568971");
    studentP4->age=20;
    studentP4->grade=4.56;
    students[3]=student_4;

    if(fwrite(students,sizeof(Student),3,file)!=3){
        exit(2);
    }
    fclose(file);

    file=fopen("students.bin","rb");
    if(file==NULL){
        exit(1);
    }
    if(fread(&studentsFromFile[i],sizeof(Student),1,file)!=3;{
        exit(3);
    }
    fclose(file);

    for(int=0;i<3;i++){
        printf(students[i].name);
        printf("\n");
        printf(students[i].fac_num);
        printf("\n%d",students[i].age);
        printf("\n%lf",students[i].grade);
    }
    //////////////////////////////////////////////////////////////////
    struct Product{
        char brand[30];
        double price;
        char name[30];
    };
    struct Store{
        char name[20];
        char url[20];
        char owner[20];
        struct Product products[10];
    };




    return 0;
}
