#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX 3

struct patient
{
    char name[20],gender[10],place[20];
    int age,ph;
};
typedef struct patient P;

void patient_details( P* p1)
{
         printf("NAME\n");
         scanf(" %s",(p1->name));
         printf("GENDER\n");
         scanf(" %s",(p1->gender));
         printf("PLACE\n");
         scanf(" %s",(p1->place));
         printf("AGE\n");
         scanf("%d",&(p1->age));
         printf("Phone Number\n");
         scanf("%d",&(p1->ph));
}

int verify_doc(int cd,int * rem)
{
    if(rem==0)
        return 0;
    if(cd==1)
    {
        (*rem)--;
        return 1;
    }
}

int dr_consult()
{
    int cd,avail,rem=MAX;
    printf("enter the code of the hospital that you wish \n the code of hospitals are listed below:\n");
    printf("1.Manipal\n 2.Columbia Asia\n 3.St.john's\n");
    scanf("%d",&cd);
    switch(cd)
    {
        case 1 : avail=verify_doc(cd,&rem);//cd==confirm doctor
                 if(avail==1)
                 {
                    return 1;
                 }
                 else
                   break;
        case 2 : avail=verify_doc(cd,&rem);
                 if(avail==1)
                 {
                    return 1;
                 }
                 else
                   break;
        case 3 :  avail=verify_doc(cd,&rem);
                 if(avail==1)
                 {
                    return 1;
                 }
                 else
                   break;
        default :  printf("wrong choice\n");
                     break;
    }
      return 0;
}


void display(P p1)
{
    printf("Name : %s\nGender : %s\nPlace : %s\nAge : %d\nPh.No : %d\n",p1.name,p1.gender,p1.place,p1.age,p1.ph);
}

int main()
{
    P p1;
    int ch,status;
    while(1)
    {
         
         printf("Enter the patient details\n");
         patient_details(&p1);// function to enter the patient details
         printf("diplay the patient details for further progress\n");
         display(p1);
         printf(" Enter the patient requiremnt fields/choice like \n ");
         printf("1.DOCTOR CONSULTATION\n 2.ORGAN/BLOOD DONATION\n 3.MEDICAL EMERGENCY\n 4.MEDICAL EQUIPMENTS AVAILABILITY\n 5.logout\n");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1 : status = dr_consult();
                      if(status==1)
                          printf("DOCTOR AVAILABLE\n");break;
                      printf("DOCTOR not available\n");
                      break;
             //case 2 : 
         }
   
    }
    return 0;
}