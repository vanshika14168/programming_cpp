//reverse a number 123=321
#include<iostream>
using namespace std;
class reverse{
    public:
    int Reverse_number(int n){
        int reverse=0;
        while(n){
            int last_digit=n%10;
            reverse=reverse*10+last_digit;
            n/=10;
        }
        return reverse;
    }
};

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    reverse R;
    cout<<"reverse of "<<n<<" is:"<<R.Reverse_number(n);
    
    return 0;
}