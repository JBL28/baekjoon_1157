#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char list1[1000001];
	int list2[100];
	for (int i = 0; i < 99; i++)
		list2[i] = 0;
	int count1 = 0;
	scanf("%s", &list1);
	while (list1[count1] != '\0') {
		if (list1[count1] >= 97)
			list2[list1[count1] - 97]++;
		else if (list1[count1] >= 65)
			list2[list1[count1] - 65]++;
		count1++;
	}
	int max = 0;
	int index = 0;
	int boool = 0;
	for (int i = 0; i < 99; i++) {
		if (list2[i] == max)
			boool = 1;
		else if (list2[i] > max) {
			max = list2[i];
			boool = 0;
			index = i;
		}
	}
	if (boool == 1)
		printf("?");
	else
		printf("%c", index + 65);
	return 0;
}