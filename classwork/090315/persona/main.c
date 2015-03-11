#include <stdio.h>
#include <string.h>

typedef struct Persona_
{
    char name[128];
    int age;
    enum Sex { male, female} sex;
    double tall;
}Persona;

int main()
{
Persona vasia, petia = {"Petia Ivanov",
    23,
    male,
    1.79
};

vasia = petia;
strcpy (vasia.name, "Vasia Ivanov");
vasia.tall = 1.81;

FILE *fp = fopen("my_file.txt", "wb");
fwrite(&vasia, sizeof(Persona), 1,fp);
fclose(fp);

//p=&vasia;
//(*p).tall -= 0.01;
//p->tall -= 0.01;
return 0;
}
