//DSA PHASE
// Struct 
#include<stdio.h>
#include<string.h>
struct Student{
    int id;
    char name[50];
    float gpa;
};

struct Student createStudent(int id, char name[50],float gpa){
    struct Student l;
    l.id = id;
    l.gpa = gpa;
    strcpy(l.name, name);
    return l;
}
struct Student findHighestGpa(struct Student s1[],int size){
    int i;
    float small = -100000000; //very small number
    for (i = 0; i < size; i++){
        if(s1[i].gpa > small){
            small = s1[i].gpa;
        }
    }
    for (i = 0; i < size;i++){
        if(s1[i].gpa == small){
            return s1[i];
        }
    }
}
void findStudentById(struct Student s1[], int size, int targetId){
    int i;
    int found=0;
    for (i = 0; i < size;i++){
        if(s1[i].id == targetId){
            printf("Target id found, Name is %s\n", s1[i].name);
            found = 1;
            break;
        }
    }
    if(found==0){
        printf("Nothing is found\n");
    }
}

void printStudent(struct Student s){
    printf("Student id: %d\n", s.id);
    printf("Student name: %s\n", s.name);
    printf("Student gpa: %f\n", s.gpa);
};

void updateGpa(struct Student* s1, float newGpa){
    s1->gpa = newGpa;
}

int main(){
    int i;
    float j;
    char k[50];
    struct Student s1[3];
    for (int z=0;z<=2;z++)
    {
        printf("Enter name:\n");
        fgets(k, 50, stdin);
        k[strcspn(k, "\n")] = 0;
        printf("Enter id:\n");
        scanf("%d", &i);
        printf("Enter gpa:\n");
        scanf("%f", &j);
        getchar();
        s1[z] = createStudent(i, k, j);
    }
    findStudentById(s1, 3, 7);
    struct Student topper;
    topper = findHighestGpa(s1, 3);
    printStudent(topper);
    return 0;
}
