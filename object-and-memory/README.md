# Object & Memory

Variables, pointers, addresses, dereferencing.

## Object nedir?

C/C++'da bir **object**, belirli bir tipin değerini tutan bir **memory
region**'dır. Java/C#'tan hatırlanabilecek "nesne = sınıf instance'ı"
tanımı, o dillerin kendi kuralıdır; C/C++'ta `int x = 5;` satırındaki `x`
de zaten başlı başına bir object'tir (heap'te `new`/`malloc` ile
oluşmasına gerek yok).

## Java'da: Reference / Referent

```java
Person person = new Person();
```

- **Reference** → `person`
- **Referent**  → `new Person()`

## C++'ta: Pointer / Pointee / Reference / Referent

```cpp
Person *person = new Person();
Person &ref = *person;
```

- **Pointer**  → `person` (adresi tutan değişken)
- **Pointee**  → `*person` (`person`'ın işaret ettiği obje)
- **Reference** → `ref` (aynı objeye başka bir "isim")
- **Referent**  → `ref`'in işaret ettiği obje (yani yine `*person`, aynı
  bellek adresi)
- **Dereference** → `*person` (pointer üzerinden objeye ulaşma işlemi;
  `ref` için bu işlem örtük/implicit'tir, syntax'ta ayrıca görünmez)

## C'de: Pointer / Pointee (Reference yok)

```c
Person *person = malloc(sizeof(Person));
```

- **Pointer** → `person` (adresi tutan değişken)
- **Pointee** → `*person` (`person`'ın işaret ettiği obje)
- **Dereference** → `*person`
- **Reference / Referent** → yok. C'de referans kavramı olmadığı için
  referent de yok; tüm dolaylı erişim pointer + dereference ile yapılır.

## Dereference'in amacı

C ve C++'ta dereference'in amacı, pointer üzerinden **pointee'nin
değerine ulaşmaktır.**

## Kod

- [`src/main.c`](src/main.c) — C tarafında object/pointer/pointee/dereference
- [`src/main.cpp`](src/main.cpp) — C++ tarafında pointer/pointee/reference/referent/dereference,
  `&ref == person` karşılaştırmasıyla reference ve pointer'ın aynı referent'ı
  gösterdiğinin ispatı


## Executing Program
1. cd object-and-memory
2. cmake -S . -B build
3. cmake --build build

// Choose one:
./build/c_demo
./build/cpp_demo