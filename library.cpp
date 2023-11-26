#include "library.h"
#include <iostream>

void Library::editBook(int index) {
    if (index >= 0 && index < size) {
        std::cout << "Editing Book " << index + 1 << ":\n";
        editBook(books[index]);
    }
    else {
        std::cout << "Invalid book index.\n";
    }
}

void Library::printAllBooks() {
    printBooks(books, size);
}

int Library::findBookByAuthor(const std::string& author) {
    return findBookByAuthor(books, size, author);
}

int Library::findBookByTitle(const std::string& title) {
    return findBookByTitle(books, size, title);
}

void Library::sortBooksByTitle() {
    sortBooksByTitle(books, size);
}

void Library::sortBooksByAuthor() {
    sortBooksByAuthor(books, size);
}

void Library::sortBooksByPublisher() {
    sortBooksByPublisher(books, size);
}