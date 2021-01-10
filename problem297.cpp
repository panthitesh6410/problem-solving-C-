// Wipro Practise questions -

#include<iostream>
using namespace std;
// int binarysearch(int arr[], int n, int k){
//     // code here
//     int l=0, h=n-1;
//     while(l<=h){
//         int mid = (l+h)/2;
//         if(arr[mid] == k)
//             return mid;
//         else{
//             if(k < mid)
//                 h = mid-1;
//             else
//                 l = mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     int k;
//     cin>>k;
//     cout<<binarysearch(arr, n, k);
//     return 0;
// }

// -------------------------------------------------
// int main(){
//     string s;
//     cin>>s;
//     int i=0, j=s.length()-1;
//     int start, end;
//     while(i!=j){
//         if(s[i] != s[i+1])
//         {
//             start = i+1;
//             break;
//         }
//         i++;
//     }
//     while(i!=j){
//         if(s[j] != s[j-1])
//         {
//             end = j-1;
//             break;
//         }
//         j--;
//     }
//     // 1(000111111)0
//     int max_count = 1;
//     for(int i=start;i<end;i++){
//         int c=0;
//         for(int j=start+1;j<=end;j++){
//             if(s[i] == s[j])
//                 c++;
//         }
//         if(c >= max_count)
//             max_count = c;
//     }
//     cout<<max_count;
//     return 0;
// }

// -------------------------------------------------
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     int result[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     // 1, 12, 3, 4, 5 -- 12, 4, 1, 3, 5 
//     int j=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] % 2 == 0)
//         {
//             result[j] = arr[i];
//             j++;
//         } 
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] % 2 != 0)
//         {
//             result[j] = arr[i];
//             j++;
//         } 
//     }
//     for(int i=0;i<n;i++)
//         cout<<result[i]<<" ";
//     return 0;
// }

// ----------------------------------------------------------
// void bubble_sort(int arr[], int n){
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(arr[j] > arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     bubble_sort(arr, n);
//     for(int i=0;i<n;i++)
//         cout<<arr[i]<<" ";
//     return 0;
// }

