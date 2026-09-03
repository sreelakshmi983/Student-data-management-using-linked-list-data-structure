#include"header.h"
extern stu *head;
void stud_save()
{
	FILE *fp=fopen("stu_rec.txt","w");
	stu *p=head;

	if(fp==0)
	{
		printf("file not present\n");
		return;
	}
	while(p)
	{
		fprintf(fp,"%d %s %f\n",p->rollno,p->name,p->percentage);
		p=p->next;
	}
	fclose(fp);
}
