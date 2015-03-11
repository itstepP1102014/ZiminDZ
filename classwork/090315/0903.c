typedef struct Persona_
{
    char name[128];
    int age;
    enum Sex { male, female} sex;
    double tall;
}Persona;

Persona vasia, petia = {"Petia Ivanov",
    23,
    male,
    1.79
};

vasia = petia;
strcpy(vasia.name, "Vasia Ivanov");
vasia.tall = 1.81;

Persona *p;
p=&vasia;
(*p).tall -= 0.01;
p->tall -= 0.01;



typedef struct Fraction_
{
    int numerator, denominator;
}Fraction;

Fraction sum(Fraction a, Fraction b)
{
    assert(a.denominator > 0);
    assert(b.denominator > 0);
    Fraction result;
    result.numerator = a.numerator * b.numerator + b.numerator * a.numerator;
    result.denominator = a.denominator * b.denominator;
    int div = gcd (result.numerator, result.denominator);
    result.numerator /= div;
    result.denominator /= div;
    return result;
}

i^2 = -1;
j^2 = -1;
k^2 = -1;

ij = k;
jk = i;
ki = j;

jkj = k;
jjkj = jk;
-1kj = jk;
kj = -jk;

int n = 11378;
char *p = (char*)&n;
for(int i = o; i < sizeof(int); ++i, ++p)
    printf("%c", *p);
printf("\n");

size_t fread(void *buf, size_t sizeElement,
                           size_t count,
                           FILE* file);

size_t fwrite(const void *buf, size_t sizeElement,
                                 size_t count,
                                 FILE *file);

