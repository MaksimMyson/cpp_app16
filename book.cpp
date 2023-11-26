#include "book.h"
#include <iostream>
#include <algorithm>

void editBook(Book& book) {
    std::cout << "Enter the new title: ";
    std::getline(std::cin, book.title);

    std::cout << "Enter the new author: ";
    std::getline(std::cin, book.author);

    std::cout << "Enter the new publisher: ";
    std::getline(std::cin, book.publisher);

    std::cout << "Enter the new genre: ";
    std::getline(std::cin, book.genre);
}

void printBooks(const Book books[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Book " << i + 1 << ":\n";
        std::cout << "Title: " << books[i].title << "\n";
        std::cout << "Author: " << books[i].author << "\n";
        std::cout << "Publisher: " << books[i].publisher << "\n";
        std::cout << "Genre: " << books[i].genre << "\n\n";
    }
}

int findBookByAuthor(const Book books[], int size, const std::string& author) {
    for (int i = 0; i < size; ++i) {
        if (books[i].author == author) {
            return i;
        }
    }
    return -1;
}

int findBookByTitle(const Book books[], int size, const std::string& title) {
    for (int i = 0; i < size; ++i) {
        if (books[i].title == title) {
            return i;
        }
    }
    return -1;
}

void sortBooksByTitle(Book books[], int size) {
    std::sort(books, books + size, [](const Book& a, const Book& b) {
        return a.title < b.title;
        });
}

void sortBooksByAuthor(Book books[], int size) {
    std::sort(books, books + size, [](const Book& a, const Book& b) {
        return a.author < b.author;
        });
}

void sortBooksByPublisher(Book books[], int size) {
    std::sort(books, books + size, [](const Book& a, const Book& b) {
        return a.publisher < b.publisher;
        });
}