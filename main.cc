#include"shared_ptr.hh"
#include"unique_ptr.hh"
#include<iostream>

int main(int argc, char const *argv[])
{
    int i = 5;
    unique_ptr<int> up = &i;
    *up = 6;
    std::cout << i << std::endl;

    char ch = 'a';
    shared_ptr<char> sp(&ch);
    ch = 'b';
    std::cout << *sp << std::endl;

//    unique_ptr<int> up2 = up;
    shared_ptr<char> sp2 = sp;
    *sp2 = 'c';
    std::cout << ch << std::endl;

    return 0;
}
