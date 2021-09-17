#include <string>
#include <iostream>
using namespace std;

class ConNguoi
{
public:
    string ho_ten;
    int tuoi;
    double chieu_cao;
    double can_nang;
    int sd3v[3];
    
};

class Humanbmi : public ConNguoi
{
public:
    double bmi;
};

double calc_bmi(double height, double weight)
{
    return (weight / pow(height, 2));
};

int main()
{
    Humanbmi nguoi;
    nguoi.ho_ten = "Vu Nguyen Coder";
    nguoi.tuoi = 18;
    nguoi.chieu_cao = 1.65;
    nguoi.can_nang = 60;
    nguoi.bmi = calc_bmi(nguoi.chieu_cao, nguoi.can_nang);
    cout << "BMI cua " << nguoi.bmi << " la: " <<  nguoi.bmi << endl;
    //BMI(nguoi);
}