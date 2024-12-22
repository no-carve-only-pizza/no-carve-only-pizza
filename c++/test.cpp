#include <iostream>

int main()
{
    int val1, val2, result = 0;
    std::cout<<"all num input: ";
    std::cin>>val1>>val2;
    result = val1+val2;
    std::cout<<"add result : "<<result<<std::endl;
   std::cout << "Hello world!\n";
   result = 0;
    if(val1<val2){
        for(int i=val1+1; i < val2; i++)
            result+=i;
    }
    else{
        for(int i=val2+1; i < val1; i++)
            result+=i;
    }
    std::cout<<"result : "<<result<<std::endl;
   return 0;
}