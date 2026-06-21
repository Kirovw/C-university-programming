#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//1
typedef struct
{
    char name[51];
    char start_date[11];
    int total_lectures;
    float price;
}Course;
//2
void applyPromo(Course *courses,int n,int index)
{
    if(index<0 || index>=n){
        printf("Invalid index!Index must be between 0 and %d",n-1);
        return;
    }
    courses[index].price=courses[index].price*0.90;
    printf("%.2f lv.-%s-%s\n",
           courses[index].price;
           courses[index].name;
           courses[index].start_date;
           )
}
//3
int save_file_info_courses(Course *courses, int n, float min_price, float max_price)
{
    FILE *ftxt;
    int count=0;
    if(ftxt=fopen("offer.txt","w")==NULL){
        printf("Error opening the text file");
        exit(1);
    }
    for(int i=0;i<n;i++){
        if(courses[i].price>min_price && courses[i].price<max_price){
            fprintf(ftxt,"%s",courses[i].name);
            fprintf(ftxt,"%s",courses[i].start_date);
            fprintf(ftxt,"%d",courses[i].total_lectures);
            fprintf(ftxt,"%.2f",courses[i].price);

            count++;
        }
    }
    fclose(ftxt);
    return count;
}

//4
Course* deleteCourse(Course *courses, *int n, char *targetName, char *targetDate)
{
    int found_index=-1;
    for(int i=0; i<*n; i++){
        if(strcmp(courses[i].name, targetName)==0
           && strcmp(courses[i].start_date,targetDate)==0){
            found_index=i;
            break;
           }
    }
    if(found_index=-1){
        printf("Course not found!\n");
        return courses;
    }
    for(int i=found_index;i<*n-1;i++){
        courses[i]=courses[i+1];
    }
    (*n)--;
    if(*n==0){
        free(courses);
        return NULL;
    }
    Course *temp=(Course*)realloc(course,(*n)*sizeof(Course));

    if(temp==NULL){
        return NULL:
    }
    return temp;
}
int main()
{
    //1
    FILE *fp;
    Course course*;
    int n;

    if((fp=fopen("courses.bin","rb"))==NULL){
        printf("Error opening file\n");
        exit(1);
    }
    if(fread(&n,sizeof(int),1,fp)!=1){
        printf("Error reading n!\n;");
        fclose(fp);
        exit(2);
    }
    courses=(Courses*)malloc(n*sizeof(Course));
    if(courses==NULL){
        printf("Memory allocation failed!\n");
        fclose(fp);
        exit(3);
    }
    if(fread(courses,sizeof(struct),n,fp)!=n){
        printf("Error reading course data\n");
        free(courses);
        fclose(fp);
        exit(4);
    }
    fclose(fp);
    printf("Loaded %d courses\n",&n);

    if(n>0){
        printf("First course is %s | Price is %2.f";=, course[0].name,course[0].price);
    }

    //2
    int indx;
    printf("Vuvedete kurs ot masiva za namaenie(indeks)");
    scanf("%d",indx);
    applyPromo(courses,n,indx);

    //3
    int min_price,max_price;
    printf("Enter min and max price");
    scanf("%d %d",&min_price,&max_price);

    int saved=save_file_info_courses(courses,n,min_price,max_price);
    if(saved<0){
        printf("Congratulations,%d courses were saved int the offer.txt file.\n",saved);

    }else{
        printf("No courses found in this price range.\n");
    }
    //4
    char nameDel[51], dateDel[11];
    printf("Vuvedete ime i data da se iztrie kurs:");
    scanf("%s %s",nameDel,dateDel);

    Course *updated=deleteCurse(courses,&n,nameDel,dateDel);

    if(updated==NULL && n>0){
        printf("Error during memory reallocation!\n");
    }else{
        printf("Successfully deleted course. Remaining %d courses", n);
    }
    return 0;
}
