/*
Nama program    : Exercise 01
Nama            : Sharashena Chairani
NPM             : 140810180022
Tanggal buat    : 13 Maret 2019
Deskripsi       : Segiempat
*************************************************/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

typedef struct{
    float panjang;
    float lebar;
} segiempat;

void input(segiempat *s){
    cout << "Panjang    : ";
    cin >> s->panjang;
    cout << "Lebar      : ";
    cin >> s->lebar;

}

float keliling(segiempat s){
    return(2*(s.panjang+s.lebar));
}

float luas(segiempat s){
    return(s.panjang*s.lebar);
}

float diagonal(segiempat s){
    return(sqrt(s.panjang*s.panjang+s.lebar*s.lebar));
}

void print(segiempat s){
    cout << "Keliling\t: " <<keliling(s)<<endl;
    cout << "Luas\t\t: " <<luas(s)<<endl;
    cout << "Diagonal\t: "<<diagonal(s)<<endl;
}
int main()
{
    segiempat* sg;
    sg = new segiempat;
    input(sg);
    print(*sg);
    return 0;
}
