#include <iostream>
int main()
{
    std::cout<<"Hello World\n";
    int a = 10;

    printf("%d",a);
    std::cout<< a;

    std::cout << "\nThis is "<<a;
    std::cout <<"\nThis "<< a << " is Ten\n";

    std:: cout << a << " " << a << "\n";

    std::cout<<a<<"\n"<<a << "\n";
    std::cout << a << std::endl
              << a;
    return 0;
}