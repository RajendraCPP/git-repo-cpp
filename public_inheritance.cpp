#include<iostream>
using namespace std;
class base {
	private:
	public:
		int base_a;
	protected:
};

class derived:public base {
	private:
	public:
		void print() {
			std::cout << "base_a: " << base_a << std::endl;
		}
	protected:
};

int main() {
derived obj;
obj.base_a =0;
return 0;
}
