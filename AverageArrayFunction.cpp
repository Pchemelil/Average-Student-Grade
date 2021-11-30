//137339 Peter Chemelil
#include <iostream>
using namespace std;

float markAverage(float);
float markAverage(float num[]){
	float avg = 0;
	for(int i=0; i<7; i++){
		avg=avg+num[i];
	}
	
	return avg;
}

int main(){
	float avg[7];
	cout<<"please enter the grades of the 7 students: \n";
	cin>> avg[1];
	cin>> avg[2];
	cin>> avg[3];
    cin>> avg[4];
	cin>> avg[5];
	cin>> avg[6];
	cin>> avg[7];
	
	cout<<"\n The avergae mark is: "<< markAverage(avg)/7;
	
}
