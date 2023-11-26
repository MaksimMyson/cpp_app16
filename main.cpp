#include "library.h"
#include <iostream>

int main() {
    Library myLibrary;

    // Sample book data initialization
    for (int i = 0; i < Library::size; ++i) {
        myLibrary.editBook(i);
    }

    myLibrary.printAllBooks();

    // Example usage of other functions
    int foundIndex = myLibrary.findBookByAuthor("AuthorName");
    if (foundIndex != -1) {
        std::cout << "Book found at index: " << foundIndex + 1 << "\n";
    }
    else {
        std::cout << "Book not found.\n";
    }

    myLibrary.sortBooksByTitle();
    myLibrary.printAllBooks();

    return 0;
}