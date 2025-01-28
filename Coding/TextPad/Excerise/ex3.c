#include <stdio.h>
void main(){

	int char_1,char_2,char_3,char_4,char_5;
	int temp;


	printf("Please input character 1: ");
	scanf(" %c",&char_1);
	printf("Please input character 2: ");
	scanf(" %c",&char_2);
	printf("Please input character 3: ");
	scanf(" %c",&char_3);
	printf("Please input character 4: ");
	scanf(" %c",&char_4);
	printf("Please input character 5: ");
	scanf(" %c",&char_5);

	while(char_1 < char_2) {
		temp = char_1;
		char_1 = char_2;
		char_2 = temp;
	}
	while(char_2 < char_3) {
			temp = char_2;
			char_2 = char_3;
			char_3 = temp;
	}
	while(char_3 < char_4) {
			temp = char_3;
			char_3 = char_4;
			char_4 = temp;
	}
	while(char_4 < char_5) {
			temp = char_4;
			char_4 = char_5;
			char_5 = temp;
	}


	printf("num 1 is  %c \n",char_1);
	printf("num 2 is  %c \n",char_2);
	printf("num 3 is  %c \n",char_3);
	printf("num 4 is  %c \n",char_4);
	printf("num 5 is  %c \n",char_5);


}
