//Lista_mayor.h
#include <iostream>
using namespace std;
template<typename X>
class Lista_mayor{
    private:
        X ArrarGenerico[5];
    public:
        Lista_mayor(X ArrayGe[]){
            for(int i=0;i<5;i++){
                ArrarGenerico[i]=ArrayGe[i];
            }
        }
        ~Lista_mayor(){}
        X mayor(){
            X max=ArrarGenerico[0];
            for(int i=0;i<5;i++){
                if(ArrarGenerico[i]>max){
                    max=ArrarGenerico[i];
                }
            }
            return max;
        }
        X menor(){
            X min=ArrarGenerico[0];
            for(int i=0;i<5;i++){
                if(ArrarGenerico[i]<min){
                    min=ArrarGenerico[i];
                }
            }
            return min;
        }

};
