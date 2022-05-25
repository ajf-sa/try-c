#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    int year;
};

void printBookPtr(struct Books *book);
void printBook(struct Books book);

int main()
{
    struct Books book1;
    struct Books book2;

    strcpy(book1.title, "The Lord of the Rings");
    strcpy(book1.author, "J.R.R. Tolkien");
    book1.year = 1954;

    strcpy(book2.title, "The Hobbit");
    strcpy(book2.author, "J.R.R. Tolkien");
    book2.year = 1937;

    printBook(book1);
    printBook(book2);

    printBookPtr(&book1);
    printBookPtr(&book2);

    return 0;
}

void printBookPtr(struct Books *book)
{
    printf("%s\n", book->title);
}

void printBook(struct Books book)
{
    printf("%s\n", book.title);
}