#include<iostream>
#include<vector>
using namespace std;

vector<string> permutations;
vector<string> palindromes;
void permute(string s){
    for(int i=0;i<s.length();i++){