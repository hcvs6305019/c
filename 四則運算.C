#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;  
    char c;
    printf("輸入要算的 數值1,數值2,運算符號");
    scanf("%d %d %c",&a,&b,&c);
    printf("數值1=%d,數值2=%d,運算符號=%c\n",a,b,c); 
  
     switch(c){
	case'+':
	printf("%d+%d=%d",a,b,a+b);
    break;
	
	case'-':
	printf("%d-%d=%d",a,b,a-b);
	break;
	
	case'*':
	printf("%d*%d=%d",a,b,a*b);
	break;
	
	case'/':
	printf("%d/%d=%d",a,b,a/b);
	break;
	
	default:
	printf("ERROR"); 
}
	return 0;
}
