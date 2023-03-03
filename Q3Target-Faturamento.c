#include <stdio.h>

int main(){
	
	float faturamento[] = {31490.7866, 37277.9400, 37708.4303, 0.0000, 0.0000, 17934.2269, 0.0000, 6965.1262, 24390.9374, 14279.6481, 0.0000, 0.0000, 39807.6622, 27261.6304, 39775.6434, 29797.6232, 17216.5017, 0.0000, 0.0000, 12974.2000, 28490.9861, 8748.0937, 8889.0023, 17767.5583, 0.0000, 0.0000, 3071.3283, 48275.2994, 10299.6761, 39874.1073};
	float mfatura = faturamento[0];
	float Mfatura = 0;
	float media = 0;
	int i, j = 0;
	int mfaturai, Mfaturai;
	
	for(i=0; i < 30; i++){
		media = media + faturamento[i];
	}
	
	media = media/30;
	
	for(i=0; i < 30; i++){
		if(Mfatura < faturamento[i]){
			Mfatura = faturamento[i];
			Mfaturai = i;
		}
		
		if(mfatura > faturamento[i]){
			mfatura = faturamento[i];
			mfaturai = i;
		}
		
		if(media < faturamento[i]){
			j++;
		}
	}
	
	printf("O maior faturamento do mes foi de R$%f no dia %d, enquanto o menor faturamento foi de R$%f no dia %d. \nHouveram %d dias onde o faturamento foi acima da media de R$%f.\n", Mfatura, Mfaturai, mfatura, mfaturai, j, media);
}
