#include <stdio.h>
#include <stdlib.h>

typedef struct {
    const char *name;
    int age;
} Person;

int main(int argc, char const *argv[])
{
    /* Object: belirli bir tipin degerini tutan memory region. */
    int age = 25;
    printf("age (object)       : deger=%d adres=%p\n", age, (void *)&age);
    // age (object)            : deger=25 adres=0x7fffce0305f4


    /* Pointer: baska bir objenin adresini tutan degisken. */
    int *agePtr = &age;
    printf("agePtr (pointer)   : tuttugu_adres=%p kendi_adresi=%p\n",
           (void *)agePtr, (void *)&agePtr);
    // agePtr (pointer)   : tuttugu_adres=0x7fffce0305f4 kendi_adresi=0x7fffce0305f8

    /* Dereference: pointer uzerinden pointee'nin degerine ulasmak. */
    printf("*agePtr (pointee)  : %d\n", *agePtr);
    // *agePtr (pointee)  : 25

    *agePtr = 30; /* pointee'yi pointer uzerinden degistir */
    printf("age (pointee uzerinden degisti) : %d\n", age);
    // age (pointee uzerinden degisti) : 30

    /* Heap'te bir object: malloc ile ayrilan memory region. */
    Person *person = malloc(sizeof(Person));
    if (!person) {
        return 1;
    }
    person->name = "Ada";
    person->age = 36;

    /* person  -> pointer (adresi tutan degisken)   */
    /* *person -> pointee (person'in isaret ettigi object) */
    printf("\nperson (pointer)   : %p\n", (void *)person);
    // person (pointer)   : 0x55d70a24d420

    printf("*person (pointee)  : name=%s age=%d\n", person->name, person->age);
    // *person (pointee)  : name=Ada age=36

    /* C'de reference/referent kavrami yok; erisim pointer + dereference ile. */
    free(person);
    return 0;
}
