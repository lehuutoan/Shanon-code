#include<stdio.h>
#include<math.h>
int main () {
	float nhiphan, tongPx = 0, temp, khong = 0, Pxiao, Hx[100];
	double Pxi[100], HX[100], Ltb[100], Pi[100], bin[100], sum1[100], tuma[100],HX1 = 0, Ltb1 = 0,sum;
	int n,j,L[100];
	int tuma2;
	printf("so phan tu trong day la: "); scanf("%d", &n);
	//nhap day
	for (int i = 0; i < n; i++) 
	{
	printf("P(x%d) = ", i+1); scanf("%lf", &Pxi[i]);
	tongPx += Pxi[i]; 
    } 
	if (tongPx != 1) {
		printf("day nhap vao bi sai");
	}
	if (tongPx == 1) {
		printf("day nhap vao la: ");
		for(int i = 0; i < n; i++){
			printf("%g ", Pxi[i]);
		}
		//sap xep day
		for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(Pxi[i] < Pxi[j]){
                // Hoan vi 2 so Pxi[i] va Pxi[j]
                temp = Pxi[i];
                Pxi[i] = Pxi[j];
                Pxi[j] = temp;        
            }
        }
    }
    printf("\nMang da sap xep la: ");
    for(int i = 0; i < n; i++){
    	printf("%g ", Pxi[i]);
	}
	//tinh Pi
		printf("\nDay Pi la: ");
        for(int i = 0; i < n; i++){ 
        Pi[0]=0.00;
		printf("%g ", Pi[i]); 
		Pi[j] = Pi[i] + Pxi[i];
		j++;
	}	
	//tinh Li
	printf("\nLi: ");
	for(int i = 0; i < n; i++) {
	double z,k,Hx,bien = Pxi[i];
	int v = -1, a = 2, e;
	k = log(a);
	z = pow(k,v);
	Hx = -(log(bien))*z;
	e = Hx/1;
	if (Hx == e) {
	L[i] = e;
	printf("%d ", L[i]);
	}
	else {
	L[i] = (Hx/1) +1;
	printf("%d ", L[i]);
	}
}
	//tinh nhi phan: neu x*2<1 thi p--, neu x*2>1 thi (sum + 10*p), den khi nao bang 1
	printf("\nnhi phan: ");
	for(int i = 0; i < n; i++){
	double e, k;
	double p=0,sum= 0;
	if (Pi[i]<1 && Pi[i] >= 0) {
	    while (Pi[i]) {
	        if (Pi[i]*2 < 1 && Pi[i] > 0){
                p--;
                Pi[i] = Pi[i]*2;
                continue;
	        }
	        if (Pi[i]*2 > 1) {
                p--;
                sum = sum + pow(10, p);
                Pi[i] = Pi[i]*2 - 1;
                continue;
	        }
	        if (Pi[i]*2 == 1) {
                p--;
                sum = sum + pow(10, p);
                break;
	        }
	        if (Pi[i]*2 == 0){
	            break;
			}
		}
    printf("%g ",sum);
    sum1[i] =  sum;
	}
	}

//tinh tu ma
	printf("\ntu ma la: ");
	for(int i = 0; i < n; i++){
	    double w = 10, q, tuma1,s,k;
	    s = L[i];
	    k = pow(w,s);
	    tuma1 = (sum1[i])*k;
	    tuma2 = tuma1/1;
    	printf("%0*d ", L[i] , tuma2);
	 
	}
//tinh HX
//printf("\nHX= ");
//for(int i = 0; i < n; i++) {
//	double z,k,Hx,bien = Pxi[i];
//	int v = -1, a = 2;
//	k = log(a);
//	z = pow(k,v);
//	Hx = -(log(bien))*z;//log2(x)
//	HX[i] = Hx*bien;
//	HX1 = HX1 + HX[i];	
//	}
//	printf("%g ", HX1);

//tinh Ltb
//printf("\nLtb= ");
//for(int i = 0; i < n; i++) {
	//double bien = Pxi[i];
	//Ltb[i] = L[i]*bien;
//	Ltb1 = Ltb1 + Ltb[i];
//	}
//	printf("%g ", Ltb1);
//tinh he so nen
//double Kt;
//Kt = HX1/Ltb1;
//if (Kt <= 1) {
//printf("\nKt= ");
//printf("%g ", Kt);
//}
//else { 
//	printf("\nKt khong thoa man");
//}
}
}



    
	

