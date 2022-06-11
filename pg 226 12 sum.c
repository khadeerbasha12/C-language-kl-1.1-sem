#include<stdio.h>
void getsum(int x)
{ 
	switch(x)
	{
		case'A':
		case'a':
			printf("Ada");
			break;
			case'B':
		case'b':
			printf("Basic");
			break;
			case'C':
		case 'c':
			printf("cobol");
			break;
			case 'D':
		case 'd':
			printf("dbase III");
			break;
			case'F':
		case 'f':
			printf("fortran");
			break;
			case'P':
		case 'p':
			printf("pascal");
			break;
			case'V':
		case 'v':
			printf("visual c++");
			break;
		default:
			printf("invalid input");
			break;
	}
	 
}
int main()
{
	char x;
	printf("enter the character");
	scanf(" %c",&x);
	getsum(x);
	return 0;
}
