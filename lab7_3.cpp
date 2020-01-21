//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>

using namespace std;

int main(){

    string status;
    string a = "UNFRIEND", b = "FRIEND" , c = "BEST FRIEND" , d = "ONE-NIGHT-STAND" , e = "MARRIED";
    int age , money , tall ;

    cout<<"Input age: ";
    cin>> age;

    if(age >20){
    if(age >=30){
    status = "status: UNFRIEND";
    cout << status;
    return 0;

    }else if (age <30){
        cout<<"Input money: ";
        cin>>money;
        if(money >= 10000000){
        status = "status: BEST FRIEND";
        cout<< status;
        return 0;
        }
        else if (money < 10000000)
        status = "status: UNFRIEND";
        cout<< status;
        return 0;
    }

    }else if (age <= 20)
    cout<<"Input height: ";
    cin>>tall;
    if(tall<160){
    status = "status: UNFRIEND";
    cout<<status;
    return 0;
    }
    else if (tall >=160 && tall <175){
    status = "status: FRIEND";
    cout<<status;
    return 0;
    }
    else if (tall >=175)
    cout <<"Input your money: ";
    cin >> money;
    if(money > 69000000){
        status = "status: MARRIED" ;
        cout<< status;
        return 0;
    }else if (money <= 69000000)
    status = "status: ONE-NIGHT-STAND";
    cout<< status;
    return 0;

    }


