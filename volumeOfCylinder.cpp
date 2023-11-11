#include<iostream>
using namespace std;
int main(){
    float r, l;//declaring variables
    cout<<"enter the radius of the cylinder:";
    cin>>r;
    cout<<endl<<"enter the height of the cylinder:";
    cin>>l;
    float pi = 22/7.0;
    float volume =pi*r*r*l;
    cout<<"volume of the cylinder is:"<<volume;


}