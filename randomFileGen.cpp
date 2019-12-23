#include<bits/stdc++.h>
using namespace  std;

int main()
{
	FILE *input=fopen("input.txt","w");

	if(input==NULL){
		perror("Unable to open file");
		exit(EXIT_FAILURE);
	}
	srand(time(NULL));//using srand() instead of rand() to change seed values 


	for (int i = 0; i <100001; i++){
		fprintf(input, "%d\n", rand()); 
	}

	// for (int i = 20; i >0; i--){
	// 	fprintf(input, "%d\n", i); 
	// }
	fclose(input);
}