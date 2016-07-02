typedef struct{
    char nombre[20];
    int edad;
    char dni[8];
}S_Person;

int loadPerson(S_Person* pPerson);
void printPerson(S_Person* pPerson);
