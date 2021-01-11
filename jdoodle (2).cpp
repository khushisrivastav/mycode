
#include <iostream>

using namespace std;

int main() {
    cout<<"what do you want to know? the  exterior angle or the third angle? ";
    string x;
getline(cin,x);
if (x=="the third angle"){
 cout<<"enter the first angle: ";
     int a1;
    cin>>a1;
     cout<<"enter the second angle: ";
    int a2;
    cin>>a2;
 int sum;
 sum=a1+a2;
 if(sum>=180){
     cout<<"Angles entered are invalid.";
 }
 else {
     int a3;
     a3=180-sum;
 cout<<"the third angle is "<<a3;
 }
}
else if (x=="the exterior angle"){
    cout<<"enter the first opposite interior angle: ";
     int ia1;
    cin>>ia1;
     cout<<"enter the second opposite interior angle: ";
    int ia2;
    cin>>ia2;
 int ia3;
ia3=ia2+ia1;
if (ia3>=180){
    cout<<"Angles entered are invalid.";
}
else {
 cout<<"the measure of the exterior angle is "<<ia3;
}
}
cout<<"\n";
}
