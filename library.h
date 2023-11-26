#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"

class Library {
public:
    void editBook(int index);
    void printAllBooks();
    int findBookByAuthor(const std::string& author);
    int findBookByTitle(const std::string& title);
    void sortBooksByTitle();
    void sortBooksByAuthor();
    void sortBooksByPublisher();

private:
    static const int size = 10;
    Book books[size];
};

#endif 