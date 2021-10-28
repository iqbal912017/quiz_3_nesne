#include <iostream>
#include <math.h>
#include "ziraat.h"

using namespace std;

void ziraat::faizhesap(){
			int miktar;
			float faiz;
			int yil;
			int para;
			cout<<"para gir : ";
			cin>>para;
		if (para >=0 && para <= 200){
			faiz = 0.1;
			yil = 1;
			for (int i=1;i<=yil;i++){
			miktar = para*pow(1.0 +faiz,i);
			cout<<"kalan "<<i<<". :"<<miktar<<endl;
			}
			
		}
		else if (para >200 && para <= 500 ){
			faiz = 0.3;
			yil = 2;
			
			for (int i=1;i<=yil;i++){
			miktar = para*pow(1.0 +faiz,i);
			cout<<"kalan "<<i<<". :"<<miktar<<endl;
			}
		}
		else if (para <0){
			cout<<"eksi olduguna gore, hatali!";
		}
		else {
			faiz = 0.5;
			yil = 4;
			
			for (int i=1;i<=yil;i++){
			miktar = para*pow(1.0 +faiz,i);
			cout<<"kalan "<<i<<". :"<<miktar<<endl;
			}
		}
			
}
