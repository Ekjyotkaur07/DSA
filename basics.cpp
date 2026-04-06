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

//simple calculator
// #include <iostream>
// using namespace std;
// int main(){
//     char op;
//     int num1,num2;
//     cout<<"Enter op"<<endl<<"Enter num1 and num2"<<endl;
//     cin>>op;
//     cin>>num1;
//     cin>>num2;
//     switch(op){
//         case '+':cout<<"sum is "<<num1+num2<<endl; break;
//         case '-':cout<<"subtraction is "<<num1-num2<<endl; break;
//         case '*':cout<<"multiply is "<<num1*num2<<endl; break;
//         case '/':cout<<"divison"<<num1/num2<<endl; break;
//     }
//     return 0;
// }

//prime or not
#include <iostream>
using namespace std;
int main(){
     int num1;
     cout<<"enter num1";
     cin>>num1;
     bool flag=true;
     for(int i=2;i<num1;i++){
        if(num1%i==0){
           flag=false;
           break;
        } }
    if(flag){
        cout<<"Prime number";
    }
    else{
        cout<<"Not a prime number";
    }
    return 0;
}
