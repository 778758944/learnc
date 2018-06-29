//
//  oo.cpp
//  learnc
//
//  Created by xiaobo on 2018/5/4.
//  Copyright © 2018年 xiaobo. All rights reserved.
//

#include <iostream>

using namespace std;

class LibMat {
public:
    LibMat() { cout << "LibMat::libMat() default constructor\n";}
    virtual ~LibMat() {cout << "LibMat::~LibMat() destructor\n";}
    virtual void print() const {
        cout << "LibMat::print() -- I am a LibMat object\n";
    }
};

class Book : public LibMat {
public:
    Book(const string &title, const string &author) : _title(title), _author(author) {
        cout << "Book::Book" << _title <<", " << _author << "constructor\n";
    }
    virtual ~Book() {
        cout << "Book::~Book() destructor\n";
    }
    virtual void print() const {
        cout << "Book::print() -- I am a Book object!\n"
        << "My title is: " << _title << "\n"
        << "My author is: " << _author << endl;
    }
    const string& title() const {return _title;}
    const string& author() const {return _author;}
    
protected:
    string _title;
    string _author;
};

class AudioBook : public Book {
public:
    AudioBook(const string& title, const string& author, const string& narrator) : Book(title, author), _narrator(narrator) {
        cout << "AudioBook::AudioBook(" << title << ", " << author << ", " << narrator << ") constructor" <<endl;
    }
    
    virtual void print() const {
        cout << "AudioBook::print() -- I am a AudioBook object" << endl;
        cout << "My title is:" << _title << endl;
        cout << "My author is:" << _author << endl;
        cout << "My narrator is:" << _narrator << endl;
    }
    
    virtual ~AudioBook() {
        cout << "AudioBook::~AudioBook() destructor" << endl;
    }
    
protected:
    string _narrator;
};

void print(const LibMat &mat) {
    cout << "in global print(): about to print mat.print()" << endl;
    mat.print();
}

class num_sequence {
public:
    typedef void (num_sequence::*PtrType) (int);
    enum ns_type {
        ns_unset, ns_fibonacci, ns_pell, ns_lucas, ns_triangular, ns_square, ns_pentagonal
    };
private:
    vector<int> *_elem;
    PtrType _pmf;
    ns_type _isa;
};

int main() {
    // LibMat libmat;
    // print(libmat);
//    Book b("The Castle", "Franz Kafka");
//    print(b);
    
    AudioBook ab("Man without Qualities", "Robert Musil", "Kenneth Meyer");
    print(ab);
    return 0;
}
























