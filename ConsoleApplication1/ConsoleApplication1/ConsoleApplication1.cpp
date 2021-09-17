#include <string>
#include <iostream>
using namespace std;


struct ConNguoi
{
    string ho_ten;
    int tuoi;
    float chieu_cao;
    float can_nang;
    int sd3v[3];
    float bmi = can_nang / pow(chieu_cao,2);
};

struct humanBMI(ConNguoi)
{

}

int main()
{
    ConNguoi nguoi;
    nguoi.ho_ten = "Vu Nguyen Coder";
    nguoi.tuoi = 18;
    nguoi.chieu_cao = 1.65;
    nguoi.can_nang = 60;
    cout << "BMI cua " << nguoi.ho_ten << " la: " << nguoi.bmi << endl;
    //BMI(nguoi);
}