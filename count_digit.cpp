#include<iostream>
using namespace std;
class solution{
    public:
    int Count_digit(int n){
        int count=0;
        while(n){
            count++;
            n/=10;
        }
        return count;
    }
};
int main(){
    int n;
    cout<<"enter the  number:";
    cin>>n;

    solution S;
    cout<<"total number of digit is:"<<S.Count_digit(n);

    return 0;
}