#include<iostream>
using namespace std;

int main(){
    int score;
    cout<<"Masukkan nilai score: ";
    cin>>score;

    if(score>=90){
        cout<<"Selamat! anda mendapat nilai A." << endl;
    }else if (score >=80){
        cout<<"Anda mendapat nilai B." << endl;
    }else if (score >=70){
        cout<<"Anda mendapat nilai C." << endl;
    }else if (score >=60){
        cout<<"Anda mendapat nilai D." << endl;
    }else {
        cout<<"Anda mendapat nilai E." << endl;
    }

return 0;
}

