//binary to decimal
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int num=1011,rem,ans=0,power=0;
//     while(num>0){
//         rem=num%10;
//         ans+=rem*pow(2,power);
//         power++;
//         num/=10;
//     }
//     cout<<ans<<endl;
// }

//decimal to binary
#include <iostream>
#include <math.h>
using namespace std;
int main(){
   int num=15,ans=0,rem,power=0;
   while(num>0){
     rem=num%2;
     ans+=rem*pow(10,power);
     num=num/2;
     power++;
   }
   cout<<ans<<endl;
}