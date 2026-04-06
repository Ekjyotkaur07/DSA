// #include <iostream>
// using namespace  std;
// int main()
// {
//     int marks[5]={66,78,98,67,55};
//     double price[]={100.67,130.44,77.6};
//     cout<<marks[2]<<endl<<price[2];
// }  

// #include <iostream>
// using namespace std;
// int main(){
//     string fruits[5]={"mango","banana","grapes","strawberry"};
//     int size=sizeof(fruits)/sizeof(int);
//     for(int i=0;i<size;i++){
//         cout<<fruits[i]<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     string fruits[5];
//     for(int i=0;i<5;i++){
//         cin>>fruits[i];
//     }
//     int size=sizeof(fruits)/sizeof(int);
//     for(int i=0;i<size;i++){
//         cout<<fruits[i]<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <limits.h>
// using namespace std;
// int main(){
//     int marks[5],smallest;
//     for(int i=0;i<5;i++){
//         cin>>marks[i];
//     }
//     int small=INT_MAX;
//     for(int i=0;i<5;i++){
//         if(marks[i]<small){
//             small=marks[i];
//         }
//         smallest=min(small,marks[i]);
//     }
//     cout<<"Less marks are "<<small<<endl;
//     cout<<"Less marks are "<<smallest;
//   return 0;
// }

//max of array
// #include <iostream>
// #include <limits.h>
// using namespace std;
// int main(){
//   int arr[7]={12,45,33,9,11,35,17};
//   int high=INT_MIN;
//   int low=INT_MAX;
//   for(int i=0;i<7;i++){
//     high=max(high,arr[i]);
//     low=min(low,arr[i]);
//   }
//   cout<<"highest is"<<high<<endl;
//   cout<<"lowest is "<<low<<endl;
//   return 0;  
// }

//array-pass by refernce(non-primitive)
// #include <iostream>
// using namespace std;
// void fun(int arr[],int size,int num){
//     for(int i=0;i<size;i++){
//       arr[i]=2*arr[i];
//     }
//     num=9;
    
// }
// int main(){
//   int num=7;
//   int arr[ ]={3,2,4,7,1};
//   fun(arr,5,num);
//   for(int i=0;i<5;i++){
//     cout<<arr[i]<<endl;
//   }
//   cout<<num;
// }

//linear search-time complexity O(n)
// #include <iostream>
// using namespace std;
// int linearsearch(int arr[],int size,int num){
//   for(int i=0;i<size;i++){
//     if(arr[i]==num){
//       return i;
//     }
//   }
//   return -1;
// }
// int main(){
//    int arr[7]={45,34,77,65,99,76,45};
//    int size=7;
//    int num=9;
//    int result=linearsearch(arr,size,num);
//    cout<<result;
//   return 0;
// }

//reverse an array
#include  <iostream>
using namespace std;
void reverse(int arr[],int size){
  int start=0;
  int end=size-1;
  while(start<end){
    swap(arr[start],arr[end]);
     start++;
     end--;
  }
}
int main(){
  int arr[]={6,7,45,88,9};
  int size=5;
  reverse(arr,size);
  for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
  }
   return 0;
}