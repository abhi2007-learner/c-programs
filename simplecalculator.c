#include <stdio.h>

int main() {
    int a, b,result;
    char op;
    printf("enter any two numbers");
    scanf("%d %d",&a,&b);
printf("enter any operator(+,-,*,/):");
    scanf(" %c", &op);

    switch(op) {
        case '+': 
        result=a+b;
		printf("result=%d\n",result); 
		break;
        case '-': 
        result=a-b;
		printf("result=%d\n",result); 
		break;
        case '*':
		result=a*b; 
		printf("result=%d\n",result); 
		break;
        case '/': 
        result=a/b;
		printf("result=%d\n",result); 
		break;
		default:
			printf("wrong operator");
    }

    return 0;
}
