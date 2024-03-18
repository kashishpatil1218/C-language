#include<stdio.h>
#include<string.h>
struct students
{
	int roll_n;
	char name[100];
	int chem_marks;
	int math_marks;
	int phy_marks;
	int sum;
	float ans;
};
main()
{
	int i,n;
	printf("total students :");
	scanf("%d",&n);
	
	struct  students s[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter roll num :");
		scanf("%d",&s[i].roll_n);
		
		printf("Enter name :");
		scanf("%s",&s[i].name);
		
		printf("Enter chem_marks :");
		scanf("%d",&s[i].chem_marks);
		
		printf("Enter math_marks :");
		scanf("%d",&s[i].math_marks);
		
		printf("Enter phy_marks :");
		scanf("%d",&s[i].phy_marks);
		printf("\n\n");
		
		s[i].sum=s[i].chem_marks+s[i].math_marks+s[i].phy_marks;
		
		s[i].ans=s[i].sum/3;
	}
	
	for(i=0; i<n; i++)
	{
		printf("students name : %s-roll_n :%d\n",s[i].name,s[i].roll_n);
		printf("chemistry marks : %d\n",s[i].chem_marks);
		printf("math marks : %d\n",s[i].math_marks);
		printf("phy marks : %d\n",s[i].phy_marks);
		printf("chemistry marks : %d\n",s[i].phy_marks);
		printf("Total marks : %d\n",s[i].sum);
		printf("Percent marks : %.2f\n\n",s[i].ans);
	}
}
