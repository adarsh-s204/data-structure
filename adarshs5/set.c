#include<stdio.h>
void main()
{
	int i;
	int U[5]={1,2,3,4,5};
	int A[5]={1,0,0,1,1};
	int B[5]={0,1,1,1,0};
	int uni[5],ints[5],diffB[5],diffA[5],compA[5],compB[5];
	
	printf("\nuniversal set is {");
	for(i=0;i<5;i++)
	{
		printf("%d ,",U[i]);
	}
	printf("}\n");
	
	printf("\n set A {");
	for(i=0;i<5;i++)
	{
		if(A[i]==1){
			printf("%d ,",U[i]);
		}
	}
	printf("}\n");
	
	
	printf("\n set B {");
	for(i=0;i<5;i++)
	{
		if(B[i]==1){
			printf("%d ,",U[i]);
		}
	}
	printf("}\n");
	
	printf("union of A and B in bit representation is =");
	for(i=0;i<5;i++){
		uni[i]=A[i]|B[i];
		printf("%d ,",uni[i]);
	}
	
	
	printf("\n union { ");
	for(i=0;i<5;i++){
		if(uni[i]==1){
			printf("%d ,"U[i]);
		}
	}
	printf(" }\n");
	
	printf("intersection of A and B in bit representation is :");
	for(i=0;i<5;i++)
	{
		ints[i]=A[i]&B[i];
		printf("%d ",ints[i]);
	}
	
	printf("\n intersection { ");
	for(i=0;i<5;i++)
	{
		if(ints[i]==1){
			printf("%d ,",U[i]);
		}
	}
	printf("}\n");
	
	printf("complement of A in bit representation is :");
	for(i=0;i<5;i++)
	{
		compA[i]=1-A[i];
		printf("%d ",compA[i]);
	}
	
	
	printf("\n A complement { ");
	for(i=0;i<5;i++)
	{
		if(compA[i]==1){
			printf("%d ,",U[i]);
		}
	}
	
	printf(" }\n");
	
	
	
	
	printf("complement of B in bit representation is :");
	for(i=0;i<5;i++)
	{
		compB[i]=1-B[i];
		printf("%d ",compB[i]);
	}
	
	
	printf("\n B complement { ");
	for(i=0;i<5;i++)
	{
		if(compB[i]==1){
			printf("%d ,",U[i]);
		}
	}
	
	printf(" }\n");
	
	
	
	
	printf("difference of A-B in bit representation is =");
	for(i=0;i<5;i++)
	{
		diffA[i]=A[i]&compB[i];
		printf("%d ",diffA[i]);
	}
	
	printf("\n A-B { ");
	for(i=0;i<5;i++)
	{
		if(diffA[i]==1)
		{
			printf("%d ,",U[i]);
		}
	}
	printf(" } \n");
	
	
	
	
	printf("difference of B-A in bit representation is =");
	for(i=0;i<5;i++)
	{
		diffB[i]=B[i]&compA[i];
		printf("%d ",diffB[i]);
	}
	
	printf("\n B-A { ");
	for(i=0;i<5;i++)
	{
		if(diffB[i]==1)
		{
			printf("%d ,",U[i]);
		}
	}
	printf(" } \n");







	
	
	
	
}
