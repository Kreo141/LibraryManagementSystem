#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Book {
private:
    string name;
    string author;
    bool isBorrowed = false;
    string borrower;

public:
    Book(string name, string author) {
        this->name = name;
        this->author = author;
    }

    // ------------------------ Name
    void setName(const string &name) {
        this->name = name;
    }

    [[nodiscard]] string getName() const {
        return name;
    }

    // ------------------------ Author
    [[nodiscard]] string getAuthor() const {
        return author;
    }

    void setAuthor(const string &author) {
        this->author = author;
    }

    // ------------------------ isBorrowed
    void setBorrowed(bool borrowed) {
        this->isBorrowed = borrowed;
    }

    [[nodiscard]] bool getBorrowed() const {
        return isBorrowed;
    }

    // ------------------------ Borrower
    void setBorrower(const string &borrower) {
        this->borrower = borrower;
    }

    [[nodiscard]] const string & getBorrower() const {
        return borrower;
    }
};

class Member {

};

class Library {
private:
    unordered_map<string, Book> books;


public:
    Book searchBooks(string &name) {
        auto it = books.find(name);
    };

    void addBook() {
        string name;
        string author;

        cout << "==================" << endl;
        cout << "\tAdd book" << endl << endl;

        cout << "Book name: ";
        getline(cin, name);

        cout << "Book author: ";
        getline(cin, author);

        books.try_emplace(name, name, author);

        cout << "==================" << endl << endl;
    }

    void removeBook() {

    }

    void borrowBook() {

    }

    void returnBook() {

    }

    void displayAllBooks() {

    }
};

int main() {
    return 0;


}






















