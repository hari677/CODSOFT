#include<iostream>
using namespace std;

int main(){
//NUMBER GUESSING GAME TASK 1
    int a;
    cout<<"ENTER A NUMBER BETWEEN 1 to 1000 : ";
    cin>>a;
    if(a>=1&&a<=1000){
    if(a<500){
        cout<<"Entered number is too low";
    }
    else if(a=500){
        cout<<"YEAH you GUSSED THE CORRECT NUMBER";

    }
    else{
        cout<<"Entered number is too high";
    }


    }

}
