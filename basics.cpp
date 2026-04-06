// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"Hello everyone"<<endl;
//     cout<<"I am Ekjyot";
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int age=19;
//     bool idcard=false;
//     if(age&&idcard){
//         cout<<"eligible";
//     }
//     else{
//         cout<<"not eligible";
//     }
// }

#include <iostream>
using namespace std;
int main(){
    char op;
    int num1,num2;
    cout<<"Enter op"<<endl<<"Enter num1 and num2"<<endl;
    cin>>op;
    cin>>num1;
    cin>>num2;
    switch(op){
        case '+':cout<<"sum is "<<num1+num2<<endl; break;
        case '-':cout<<"subtraction is "<<num1-num2<<endl; break;
        case '*':cout<<"multiply is "<<num1*num2<<endl; break;
        case '/':cout<<"divison"<<num1/num2<<endl; break;
    }
    return 0;
}