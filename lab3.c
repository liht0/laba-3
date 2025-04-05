#include <stdio.h>
#include <string.h>
int main(){
	char stroka [80];
	int r = 0;
	printf ("Vvedite lubie 80 simvolov: ");
	if (fgets(stroka,sizeof(stroka),stdin)==NULL){
		printf ("Vvedite snova\n");
		return 1;
	}
	stroka[strcspn(stroka, "\n")] = '\0';
	size_t m = strlen(stroka);
	for (r=0; r<m; r++){
		if (stroka [r] == 'a'){
			stroka [r] = 'A';
	}
		if (stroka [r] == 'b'){
			stroka [r] = 'B';
	}
	}
	printf("Rezultat: %s\n", stroka);
	return 0;
}
