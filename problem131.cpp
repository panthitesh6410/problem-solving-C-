// // Codechef April Lunchtime 2020 Div.2 :
// // Another Birthday Present :

// #include<iostream>
// using namespace std;
// bool is_sorted(int arr[], int n)
// {
//     int count=0;
//     for(int i=0;i<n-1;i++)
//     {
//         if(arr[i] < arr[i+1])
//             count++;
//     }
//     if(count == n-1)
//         return true;
//     else
//         return false;
// }
// int main()
// {
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++)
//     {
//         int n, k, flag=0;
//         cin>>n>>k;
//         int arr[n];
//         for(int j=0;j<n;j++)
//             cin>>arr[j];
//         for(int j=0;j<n-1;j++)
//         {
//             if(is_sorted(arr, n))
//                 flag = 1;
//             else
//             {
//                 if(arr[j] > arr[j+1])
//                 {
//                     int temp = arr[j];
//                     arr[j] = arr[j+k];
//                     arr[j+k] = temp;
//                 }
//             }
//         }
//         if(flag == 1)
//             cout<<"yes"<<endl;
//         else
//             cout<<"no"<<endl;
//     }
//     return 0;
// }