//vectors-array like data structure but dynamic(not fixed size)
//STL-standard template lib-k andr datastrctures ka implementatipon likha hua h

//vector<int> vec; //declare a vector
//bydefault size zero
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     //vector<int>vec;
//     //cout<<vec[0]; //segmentation fault - as it is empty
//     //vector<int> vec ={1,2,3};
//     vector<int> vec(3,0); //size,false value
//     cout<<vec[0]<<endl;
//     cout<<vec[1]<<endl;

// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<char> vec={'a','y','e','m'};
//     for(char i:vec){
//         cout<<i<<endl;
//     }
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> vec={23,55,44};
//     cout<<"size of vector "<<vec.size()<<endl; //3
//     vector<int>vec2;
//     cout<<"size of vector "<<vec2.size()<<endl; //0
// }

// #include <iostream>

// #include <vector>
// using namespace std;
// int main(){
//     vector<int> vec;
//     cout<<"size of vector "<<vec.size()<<endl; 
//     vec.push_back(25);
//     vec.push_back(12);
//     vec.push_back(15);
//     vec.push_back(99);
//     vec.push_back(44);
//     cout<<"size of new  vector "<<vec.size()<<endl; 
//     vec.pop_back(); //lasrt index value delete
//     cout<<"front value is "<<vec.front()<<endl;
//     cout<<"back value is "<<vec.back()<<endl;
//     cout<<"at func"<<vec.at(1)<<endl; //at=index 
// }

//static vs dynamic allocation
//static-memory allocated at compile time-in stack
//int arr[5];-array created
//dynamic allocation during run time-- in heap
//runtime mein push back func

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> vec;
//     vec.push_back(0);
//     vec.push_back(1);
//     vec.push_back(2);
//     cout<<vec.size()<<endl;
//     cout<<vec.capacity(); //because everytime the capacity doubles of previous one
// }

//leetcode-136 linear run time complexity means no usage to nested loops
//constant space-single variable
//XOR of number with itself is zero
//XOR of number with zero is number itself

//kadane's algorithm
//an array of size n has max subarrays n*n+1/2
//subarray-contnous part of array

//printing all subarrays
// #include <iostream>
// using namespace std;
// int main(){
//       int n=5;
//       int arr[5]={1,2,3,4,5};
//       int start,end,i;
//       for(start=0;start<n;start++){
//         for(end=start;end<n;end++){
//             for(i=start;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//       }
//       return 0;
// }

//brute force approach
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n=5;
    int arr[5]={-1,4,3,-5,8};
    int maxs=INT_MIN;
    for(int start=0;start<n;start++){
        int sum=0;
        for(int end=start;end<n;end++){
            sum+=arr[end];
            maxs=max(sum,maxs);
        }
    }
    cout<<"max subarray sum"<<maxs;
}

//kadane's algo
// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int n=5,sum=0,maxs=INT_MIN;
//     int arr[5]={-1,4,3,-5,8};
//     for (int i = 0; i < n; i++)
//     {
//         sum+=arr[i];
//         maxs=max(maxs,sum);
//         if(sum<0){
//             sum=0;
//         }
//     }
//     cout<<maxs;
    
// }