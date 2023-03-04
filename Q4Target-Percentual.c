#include <stdio.h>

int main(){
	
	float fatmensalSP = 67836.43;
	float fatmensalRJ = 36678.66;
	float fatmensalMG = 29229.88;
	float fatmensalES = 27165.48;
	float fatmensalOutros = 19849.53;
	float total = 0;
	
	total = fatmensalSP + fatmensalRJ + fatmensalMG + fatmensalES + fatmensalOutros;
	
	printf("O percentual de representacao que cada estado teve dentro do valor total mensal da distribuidora foi:\n\nSP - %f\nRJ - %f\nMG - %f\nES - %f\nOutros - %f", 100*fatmensalSP/total, 100*fatmensalRJ/total, 100*fatmensalMG/total, 100*fatmensalES/total, 100*fatmensalOutros/total);

}
