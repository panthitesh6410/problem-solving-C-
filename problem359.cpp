// TCS digital capability exam - 

#include<iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int digits = 0, words = 0, flag = 0;
    for(int i=1;i<argc;i++){
        if(isdigit(stoi(argv[i])))
            digits++;
        else{
            string temp = argv[i];
            for(int j=0;j<temp.length();j++){
                if(temp[j]>='0' && temp[j]<='9'){
                    flag = 1;
                    break;
                }
            }
            words++;
        }   
    }
    if(flag == 1)
        cout<<"Invalid Input";
    else
        cout<<"Digits = "<<digits<<"\n"<<"Words = "<<words;
    return 0;
}