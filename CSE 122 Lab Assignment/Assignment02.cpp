#include<bits/stdc++.h>
using namespace std;

class Publication {
protected:
    string title;
    float price;
public:
    virtual void getData() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }
    virtual void putData() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication {
    int pageCount;
public:
    void getData() {
        Publication::getData();
        cout << "Enter page count: ";
        cin >> pageCount;
    }
    void putData() {
        Publication::putData();
        cout << "Page count: " << pageCount << endl;
    }
};

class Tape : public Publication {
    float playingTime;
public:
    void getData() {
        Publication::getData();
        cout << "Enter playing time (in minutes): ";
        cin >> playingTime;
    }
    void putData() {
        Publication::putData();
        cout << "Playing time: " << playingTime << " minutes" << endl;
    }
};

int main() {
    Book b;
    Tape t;

    cout << "Enter book data:" << endl;
    b.getData();
    cout << endl;

    cout << "Enter tape data:" << endl;
    t.getData();
    cout << endl;

    cout << "Book data:" << endl;
    b.putData();
    cout << endl;

    cout << "Tape data:" << endl;
    t.putData();
    cout << endl;

    return 0;
}
