#ifndef _STUDENT_H_
#define _STUDENT_H_

//const int STR_LEN=20;
#define STR_LEN 20

typedef struct _student
{
    char name[STR_LEN];
    //char name[20];
    int gender;
    int age;
} Student;

#endif
