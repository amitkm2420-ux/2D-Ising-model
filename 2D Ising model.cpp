#2D ising model
#Amit Kumar, 2011

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<fstream>

using namespace std;

int main(){

srand48(time(NULL));

ofstream ofl("ising2m.dat",ios::out);

long int N;

cout << "enter the dimension" << endl;
cin >> N;

double T,H,t,T2;
long int temp,s[N+2][N+2],sum,newsum,mag;

cout << "enter the temperature"  << endl;
cin >> t;

cout << "enter the magnetic field"  << endl;
cin >> H;


long int p,p1;
double k = 1.38*pow(10,-23);
double z = (double) 1/((N)*(N));
cout << z << endl;
double new_eng,eng_old,sus,chi;
double f,dh,prb,f1,eg,mag1,eg2,cv;

for(double T=0.1;T<=t;T = T+0.05){
   eg = 0;  
   mag1 = 0;
   eg2 = 0;
   sus = 0;
    for(long int u=0;u<100;u++){
        
        for (long int k1=1;k1<=N;k1++){
        for (long int k=1; k<=N;k++){
              s[k1][k] =  1;
         }
         }
           new_eng = -2*(N)*(N);
     
   for(long int j=1;j<=10000;j++){
   p = floor(1+N*drand48());
   p1 = floor(1+N*drand48());
   temp = s[p][p1];
   s[p][p1] = -temp;
   eng_old = new_eng;
   new_eng = 0;
     
     for(long int i1=1;i1<=N;i1++){ 
     s[i1][N+1] = s[i1][1];
     s[i1][0] = s[i1][N];
     for(long int i=1;i<=N;i++){
     s[N+1][i] = s[1][i];
     s[0][i] = s[N][i];
     new_eng = new_eng - 0.5*(s[i1][i]*s[i1][i+1] + s[i1][i]*s[i1][i-1] + s[i1][i]*s[i1+1][i] + s[i1][i]*s[i1-1][i]) - H*s[i1][i];
     }
     }
     
  f = drand48();
  dh = new_eng - eng_old; 
  prb = exp (-dh*(1/T));

  if(dh<0){
   s[p][p1] = -temp;
  }
  else if(f < prb){ 
    s[p][p1] = -temp;
  }else if(f>prb){
   s[p][p1] = temp;  
   new_eng = eng_old;
  } 
 }
  
  mag = 0;
  for(long int l1=1;l1<=N;l1++){
  for(long int l=1;l<=N;l++){
  mag = mag + s[l1][l];
  }
  }
  mag1 = mag1 + mag;
  eg = eg + new_eng;
  eg2 = eg2 + pow(new_eng*z,2); 
  sus = sus + pow(mag*z,2);
}

T2 = (double) pow(T,2);
cv = (eg2*0.01 - pow(eg*z*0.01,2))/T2;
chi = (sus*0.01 - pow(mag1*z*0.01,2))/T;
cout << eg*z*0.01 << "   " << mag1*0.01*z << "      "  << cv << "    " << chi << endl;
ofl << T << "    " << eg*z*0.01  << "   " << mag1*0.01*z << "     " << cv << "    " << chi << endl;
}

 
}




