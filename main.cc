#include"shared_ptr.hh"
#include"unique_ptr.hh"
#include<iostream>

class Point{
    public:
    Point(int x, int y): x(x), y(y){}
    int x;
    int y;
};

class SomeClass{
    public:
    SomeClass(double number): number(number){}
    bool isNumberZero(){
        return number == 0;
    }
    private:
    double number;
};

int main(int argc, char const *argv[])
{
    int *i = new int(5);
    unique_ptr<int> up = i;
    (*up)++;
    std::cout << *i << std::endl;

    char *ch = new char('a');
    shared_ptr<char> sp(ch);
    *ch = 'b';
    std::cout << *sp << std::endl;

//    unique_ptr<int> up2 = up;
    shared_ptr<char> sp2 = sp;
    *sp2 = 'c';
    std::cout << ch << std::endl;

    shared_ptr<char> sp3(sp2);
    *sp = 'd';
    std::cout << *sp3 << std::endl;

    unique_ptr<bool> up2 = new bool(false);
    std::cout << *up2 << std::endl;

    shared_ptr<Point> sp4 = new Point(1,2);
    shared_ptr<Point> sp5 = sp4;
    sp5->x = 3;
    std::cout << sp4->x << std::endl;

    unique_ptr<SomeClass> up3 = new SomeClass(1);
    std::cout << up3->isNumberZero() << std::endl;
    unique_ptr<SomeClass> up4 = new SomeClass(0);
    std::cout << up4->isNumberZero() << std::endl;
    return 0;
}
