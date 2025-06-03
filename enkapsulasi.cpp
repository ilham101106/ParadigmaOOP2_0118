#include<iostream>
using namespace std;


class remoteLampu {
private:
    string saklarNo[10];
public:
    void setSaklarNo(int i, string value){
        saklarNo[i] = value;
    }
    string getSaklarNo(int i) {
        return saklarNo[i];
    }
};

int main(){
    remoteLampu LampuRumah;

    LampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
    LampuRumah.getSaklarNo(1, "Lampu Ruang Tamu");
    LampuRumah.getSaklarNo(2, "Lampu Kamar Tidur");
    LampuRumah.getSaklarNo(3, "Lampu Dapur");

    cout<<LampuRumah.getSaklarNo(0)<<endl;
    cout<<LampuRumah.getSaklarNo(1)<<endl;
    cout<<LampuRumah.getSaklarNo(2)<<endl;
    cout<<LampuRumah.getSaklarNo(3)<<endl;

    return 0;
    
}