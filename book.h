#ifndef BOOK_H
#define BOOK_H

#include <string>

struct Book {
    std::string title;
    std::string author;
    std::string publisher;
    std::string genre;
};

void editBook(Book& book);
void printBooks(const Book books[], int size);
int findBookByAuthor(const Book books[], int size, const std::string& author);
int findBookByTitle(const Book books[], int size, const std::string& title);
void sortBooksByTitle(Book books[], int size);
void sortBooksByAuthor(Book books[], int size);
void sortBooksByPublisher(Book books[], int size);

#endif 