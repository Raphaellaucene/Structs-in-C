//Program student fila
//library declaration 
#include <stdio.h>
#include <conio.h> //handle function of chars in the screen

int main(void) {

    //nested struct
    typedef struct { //create alias to trasnform the name to date
        int day;
        int mounth;
        int year;
    } Date;

    typedef struct {
        char street[30];
        int number;
        char naiborroud[30];
        char city[30];
        char state[2];
        int zipCode;
    } Address;

    struct StudentFile //type unic identifier 
    { //list of types and members data inside of struct
        int registration;
        char name[50];
        char course[30];
        float grade;

        Date dateBirth; //type struct
        Address studentAddress;
    };
        
    //declaring a var student of type struct StudentFile for handling
    struct StudentFile student[2]; //array that receive 2 students for easily visualization

    int i;


    printf("\n Student File \n");
        
    for (i = 0; i < 2; i++)
    {
        printf("\n Student registration: ");
        scanf("%d", &student[i].registration); //type int

        printf("Student name: ");
        scanf("%s", &student[i].name); //type char
            
        printf("Insert the Student address: ");
        scanf("%s", &student[i].studentAddress.street);
        
        printf("Insert the Student number: ");
        scanf("%d", &student[i].studentAddress.number);
            
        printf("Insert the Student Birthday date: ");
        scanf("%d", &student[i].dateBirth.day);
            
        printf("Insert the Student Birthday mouth: ");
        scanf("%d", &student[i].dateBirth.mounth);
            
        printf("Insert the Student Birthday year: ");
        scanf("%d", &student[i].dateBirth.year);

        printf("\n Insert student grade: \n");
        scanf("%f", &student[i].grade); //insert grade in member grade
    }

    for(i=0; i<2; i++) {
        printf("\n Student File\n");
        printf("\nRegistration: %d\n", student[i].registration);
        printf("\nName: %d\n", student[i].name);
        printf("Address: %s, %d, Naiborroud %s,City %s, ZipCode: %d\n", student[i].studentAddress.street, student[i].studentAddress.number,
        student->studentAddress.naiborroud, student->studentAddress.city, student->studentAddress.zipCode);
        printf("Grade: %.2f\n", student[i].grade);
    }
    system("PAUSE");
    return(0);
}
