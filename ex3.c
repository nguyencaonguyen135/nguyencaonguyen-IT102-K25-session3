#include<stdio.h>
#include<math.h> 
	int main(){
		float r;
		float chu_vi;
		float dien_tich;
		
		printf("nhap ban kinh hinh tron: ");
		scanf("%f",&r);
		chu_vi = 2 * M_PI * r;
		dien_tich = M_PI * r * r; 
		printf("chu vi la = %.2f\n",chu_vi); 
		printf("dien tich la = %.2f\n",dien_tich); 
		return 0; 
	} 
