#include<stdio.h>
#include<string.h>
struct student
{
	char name[100];
	int r_no;
	float marks;
};
main()
{
	struct student s1,s2,s3;
	
	//student1
	strcpy(s1.name,"jinal prajapati");
	s1.r_no=101;
	s1.marks=67;
	
	printf("student 1:\n");
	printf("Name:%s\n",s1.name);
	printf("Roll no:%d\n",s1.r_no);
	printf("Marks:%2.f\n",s1.marks);
	
	//student2
	strcpy(s1.name,"hemil chaudhary");
	s1.r_no=102;
	s1.marks=57;
	
	printf("\n");
	printf("student 2:\n");
	printf("Name:%s\n",s1.name);
	printf("Roll no:%d\n",s1.r_no);
	printf("Marks:%2.f\n",s1.marks);
	
	//student3
	strcpy(s1.name,"hemangi patel");
	s1.r_no=103;
	s1.marks=89;
	
	printf("\n");
	printf("student 3:\n");
	printf("Name:%s\n",s1.name);
	printf("Roll no:%d\n",s1.r_no);
	printf("Marks:%2.f\n",s1.marks);
	
}
