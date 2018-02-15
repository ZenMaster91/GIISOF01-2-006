#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMUMSIZE 20

struct person {
  char name[MAXIMUMSIZE];
  int age;
  float income;
};

int main (int argc, char *argv[]) {

  struct person teacher={"Fernando", 23, 777.77};
  teacher.age = ; // Get age from command line.
  strcpy(teacher.name, *argv); // Get name from command line.

  struct person student;

  strcpy(student.name,"Juan");
  student.age=19;
  student.income=11.777;

  printf("Teacher name %s\n and is %d years old.", teacher.name, teacher.age);
  printf("The overall income of the teacher and the student is %f\n",student.income+teacher.income);
  exit(1);
}

// 1. Compile using "gcc EN08Structs.c"
// 2. Execute using "./a.out"
// 3. Modify the programa so that the teacher's name,
// age and income are obtained from the command line
