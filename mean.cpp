#include<iostream.h>
#include<conio.h>
void main(){
	
	//clearing previous screen
	clrscr();
	
	// declaration of x, y, z, f and n
	int n, x [ 50 ], y [ 50 ], z [ 50 ], f[ 50 ];
	
	//entering value of n
	cout<<"How many elements are there : ";
	cin>>n;
	
	//entering values of x, y and f
	cout<<"Enter lower limits , upper limits and frequencies of eements : ";
	int i;
	for(i=0;i<n;i++){
		cin>>x[i]>>y[i]>>f[i];
	}
	
	//calculating Σfm & Σf
	int sum_fm=0;
	int sum_f=0;
	for(i=0;i<n;i++){
		z [ i ] = (float) (x [ i ] + y [ i ])/2;
		sum_fm  = sum_fm + z [ i ] * f [ i ];
		sum_f += f [ i ];
	}
	
	//calculating mean
	float mean = (float) sum_fm/sum_f;
	
	//printing mean
	cout<<"Mean of the series is : "<<mean;
	getch();
}
