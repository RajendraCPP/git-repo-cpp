//template<typename T>
//returnType functionName(T parameter1, T parameter2, ...) {
    // Body of the function
//}
#include"template.h"

template<typename T>
T sub(T a, T b) {
	if(a>b)
		return(a-b);
	else
		return(b-a);
}
template <typename T> 
T add(T a, T b){
        return(a+b);
}


int main() {

       cout << "sum :" <<  add<int>(13,4) << endl;
       cout << "sum :" <<  add<int>(13.56,4.12) << endl;
       cout << "sub :" <<  sub(13,4) << endl;

}

