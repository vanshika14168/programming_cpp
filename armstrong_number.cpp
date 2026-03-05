//check number is armstrong(sum of cube of eacch digit is equal to given number)
//example=371=3^3+7^3+1^3=371
#include<iostream>
using namespace std;
class Armstrong{
    public:
    bool Armstrong_number(int n){
        int c=n;
        int sum=0,last_digit;
        while(n){
            last_digit=n%10;
            sum+=(last_digit*last_digit*last_digit);
            n/=10;
        }
        if(c==sum) return true;
        else return false;
    }
};

int main(){

    int n;
    cout<<"enter number:";
    cin>>n;
    Armstrong A;
    cout<<n<<" is armstrong number:"<<A.Armstrong_number(n);

    return 0;
}