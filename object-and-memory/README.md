# Object & Memory
// Variables, pointers, addresses, dereferencing ele alınır.
C/C++'da bir nesnenin tanımı şöyledir: belirli bir tipin değerini tutan bir memory region.
Java/C#'tan hatırlayabileceğiniz "nesne = sınıf instance'" tanımı, bu dillerin kendi kurallarının bir parçasıdır.

### Javada
```
Person person = new Person()
Reference -> person
Referent -> new Person()
```
### C++'da ->
```
Person *person = new Person(); 
Person &ref = *person;
Pointer -> person (adresi tutan değişken)
Pointee -> *person (person'ın işaret ettiği obje)
Reference -> ref (aynı objeye başka bir "isim")
Referent -> ref'in işaret ettiği obje (yani yine *person, aynı bellek adresi)
Dereference -> *person (pointer üzerinden objeye ulaşma işlemi; ref için işlem örtük, syntax'ta görünmez)
```
### C'da ->
```
Person *person = malloc(sizeof(Person));
Pointer -> person (adresi tutan değişken)
Pointee -> *person (person'ın işaret ettiği obje)
Dereference -> *person (pointer üzerinden objeye ulaşma işlemi)
Reference -> yok
Referent -> yok, referans olmadığı için dolayısıyla referent'da olmuyor
```
```
C ve  C++ da dereference'in amacı pointee'nin değerine ulaşmaktır 
```
### Types
```
C'de de 2 farklı variable type var: user-defined types ve built-in types.
- Built-in types -> derleyici tarafından doğrudan tanınır: int, char, float, double, short, long, unsigned, _Bool (C99+), void

- User-defined types -> programcı tanımlar: struct, union, enum (C'de "class" yok, ama struct/union/enum aynı "kullanıcı tipi tanımlama" rolünü üstlenir)
```


### Executing Program
1. cd object-and-memory
2. cmake -S . -B build
3. cmake --build build

// Choose one:
./build/c_demo
./build/cpp_demo