/*wap to find last occurenc of element */
/* conditions = first occurence 
 last occurence */

#include<iostream>
#include<vector>
using namespace std;
int main(){

    int size;
    cout<<"enter the size of vector: ";
    cin>>size;

    vector<int> v(size);
    cout<<"enter the element of vector:";
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }
    int x;
    cout<<"enter the element you found that occurence:";
    cin>>x;
    int occurence = 0;
    
     for(int i=0; i<v.size(); i++){
        if(v[i]==x){
            occurence = i+1;
            break;
        }
       
    }

    

    cout<<x<<" is in vector at:"<<occurence<<" position";


    return 0;
}
