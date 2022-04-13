#include <iostream>
using namespace std;

int main(){
    /*
    Jika nilai >=90 Lulus sangat memuaskan
    Jika nilai>= 80 Lulus memuaskan
    Jika nilai>= 75 Cukup
    tidak boleh >100
    tidak boleh <0
    <75 tidak lulus
    */
    int nilai; 
    cout<<"Masukkan Nilai ="; cin>>nilai;
    if (nilai >=100 ||nilai <0) {
        cout<<"Diluar jangkauan";
    }
    else if (nilai>=90){
        cout<<"Lulus sangat Memuaskan";
    }
    else if (nilai>=80) {
        cout<<"Lulus Memuaskan";
    }
    else if (nilai >=75) {
        cout<<"Cukup";
    }
    else if (nilai <0){
        cout<<"Diluar jangkauan";
    }
    else{
        cout<<"tidak lulus";
    }
    
    


    return 0;
}//end of main function
