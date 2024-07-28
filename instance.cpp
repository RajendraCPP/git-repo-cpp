#include <iostream>
using namespace std;
class my_class {
    public:
    void function();
    int add(int , int );
};
my_class* obj_ptr;

my_class* GetInstance() {
    return obj_ptr;
}

void my_class::function() {
    std::cout << "GGG" << std::endl;
}
int my_class::add( int a, int b) {
	return(a+b);
}

int main()
{
    GetInstance()->function();
    int res = GetInstance()->add(6,3);
    std::cout << res << std::endl;
    return 0;
}

