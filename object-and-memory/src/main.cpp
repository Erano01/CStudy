#include <iostream>

struct Person {
    const char *name;
    int age;
};

int main(int argc, char const *argv[])
{
    Person *person = new Person{"Ada", 36};

    /* person  -> pointer (adresi tutan degisken)          */
    /* *person -> pointee (person'in isaret ettigi object) */
    std::cout << "person (pointer)   : " << person << '\n';
    std::cout << "*person (pointee)  : name=" << person->name
               << " age=" << person->age << '\n';

    /* reference: ayni objeye baska bir "isim". Kendi adresi yoktur;
     * &ref, pointee'nin (referent'in) adresini verir. */
    Person &ref = *person;

    std::cout << "\nref (reference)    : name=" << ref.name
               << " age=" << ref.age << '\n';
    std::cout << "&ref == person?    : "
               << (&ref == person ? "true (ayni referent)" : "false") << '\n';

    /* Pointer icin dereference syntax'ta acik (*person / person->),
     * reference icin dereference ortuk/implicit'tir (dogrudan ref.age). */
    ref.age = 37; /* referent'i (yani *person'i) degistirir */
    std::cout << "\nperson->age (ref uzerinden degisti) : " << person->age << '\n';

    delete person;
    return 0;
}
