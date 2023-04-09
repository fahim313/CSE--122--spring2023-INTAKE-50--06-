
#include <bits/stdc++.h>
using namespace std;
class Animal {
protected:
    int age;
    bool alive;
    long id;
    pair<double, double> location;
public:
    Animal() {
    age=0;
    alive=true;
    id=0;
    location=make_pair(0.0,0.0);
    }
    Animal(int a, double x, double y) {
        age=a;
        alive=true;
        id=151;
        location=make_pair(x,y);
        }
    virtual void move_(double x, double y) {
        location.first = x;
        location.second = y;
    }
    virtual void eat() {
        cout << "Animal is eating.\n";
    }
    virtual void sleep() {
        cout << "Animal is sleeping.\n";
    }
    void setAlive(bool value) {
        alive = value;
    }
    virtual ~Animal() {}
    friend ostream& operator<<(ostream& os, const Animal& a);
};
class Bird: public Animal {
public:
    Bird(): Animal() {}
    Bird(int a, double x, double y): Animal(a, x, y) {}
    void fly(double x, double y) {
        cout << "Bird is flying to " << x << ", " << y << endl;
        move_(x, y);
    }
    void eat() {
        cout << "Bird is eating worms.\n";
    }
};

class Canine: public Animal {
public:
    Canine(): Animal() {}
    Canine(int a, double x, double y): Animal(a, x, y) {}
    void run(double x, double y) {
        cout << "Canine is running to " << x << ", " << y << endl;
        move_(x, y);
    }
    void eat() {
        cout << "Canine is eating meat.\n";
    }
};

ostream& operator<<(ostream& os, const Animal& a) {
    os << "Animal " << a.id << " (age " << a.age << ", alive: " << boolalpha << a.alive << ") is at location (" << a.location.first << ", " << a.location.second << ")";
    return os;
}

int main() {
    Bird b(2, 3.0, 4.0);
    Canine c(3, 5.0, 6.0);

    cout << b << endl;
    cout << c << endl;

    b.fly(20.0, 30.0);
    c.run(40.0, 50.0);

    b.eat();
    c.eat();

    b.setAlive(false);
    c.setAlive(false);

    cout << b << endl;
    cout << c << endl;

    return 0;
}

