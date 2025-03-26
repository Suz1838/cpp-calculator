# include <iostream>
using namespace std;

int main(){
    // int age;
    // cout<<"Enter your age"<<endl;
    // cin>>age;
    // if (age >= 150 || age<4)
    // {
    //     cout<<"Invalid age";
    // }
    
    // else if (age>=18){
    //     cout<<"You can vote";
    // }

    // else
    //     {cout<<"You cannot vote";
    //     }

    float a = 34.34;
    float* ptra;
    ptra = &a;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*ptra<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<ptra<<endl;
}
