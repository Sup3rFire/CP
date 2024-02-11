#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout << "1. nomor 7\n2. nomor 8\n3. nomor 9\n4. nomor 10\npilih nomor berapa: ";
    cin  >> a;
    switch(a){
    case 1:
      int x;
      cout << "SAYA CINTA INDONESIA\nsebanyak: ";
      cin  >> x;
      for(int i = 0; i < x; i++){
          cout << "SAYA CINTA INDONESIA ";
      }
      break;
    case 2:
      int b, c;
      cout << "angka: ";
      cin  >> b;
      cout << "mencapai: ";
      cin  >> c;
      for(int k = 0; k < c; k++){
          cout << b << endl;
          b++;
      }
      break;
    case 3:
      int y;
      cout << "TINGGI: ";
      cin  >> y;
      int z = 1;
      do{
          int v = 1;
          do{
              cout << "* ";
              v++;
          }while(v <= z);
          cout << endl;
          z++;
      }while(z <= y);
      break;
    case 4:{
      int m;
      cout << "masukkan nilai: ";
      cin  >> m;
        for(int t = 0; t < 10; t++){
        if(m > 90){
            cout << "nilai : A";
        }else if(m > 80){
            cout << "nilai : B";
        }else if(m > 70){
            cout << "nilai : C";
        }else if(m > 60){
            cout << "nilai : D";
        }else{
            cout << "nilai : E";
        }
      }
      break;}
    // default:
    //      cout << "tidak ada";
    //      break;
    }
    return 0;
}