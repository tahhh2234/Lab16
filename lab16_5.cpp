#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;

	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *A,int *B, int *C, int *D){
	int a[] = {*A, *B, *C, *D}, b[4] = {};

    int i = rand()%4;
    b[0] = a[i];
    a[i] = 0;

    int j = 0;
    do{
        j = rand()%4;
    }while(a[j] == 0) ;
    b[1] = a[j];
    a[j] = 0;

    int k = 0;
    do{
        k = rand()%4;
    }while(a[k] == 0) ;
    b[2] = a[k];
    a[k] = 0;

    int l = 0;
    do{
        l = rand()%4;
    }while(a[l] == 0) ;
    b[3] = a[l];
    a[l] = 0;

    *A = b[0], *B = b[1], *C =b[2], *D = b[3];
}