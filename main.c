#include"header.h"
int main()
{
	char op,subop;
	while(1)
	{
	printf("****STUDENT RECORD MENU*****\n");
	printf("a/A:Add new record\nd/D:Delete a record\ns/S:Show the list\nm/M:modify a record\nv/V:save records\ne/E:Exit\nt/T:sort the list\nl/L:delete all the records\nr/R:reverse the list\n");
	printf("enter your choice:\n");
	scanf(" %c",&op);
	if(op>='a' && op<='z')
		op=op-32;
	switch(op)
	{
		case 'A':stud_add();
			 break;
		case 'S':printf("-----------------------------\n");
                         printf("Rollno.  Name  Percentage\n");
                         printf("-----------------------------\n");
                         stud_display();
                         printf("-----------------------------\n");
                         break;
                case 'D':printf("r/R:enter roll number to delete\nn/Nenter name to delete\n");
                         scanf(" %c",&subop);
                         if(subop>='a' && subop<='z')
                                 subop=subop-32;
                         switch(subop)
                         {
                                 case 'R':stud_delete_roll();break;
                                 case 'N':stud_delete_name();break;
                                 default:printf("invalid option\n");
                         }
                         break;
		case 'M':printf("r/R:search by rollno \n n/N:search by name\n p/P:search by percentage\n");
			 scanf(" %c",&subop);
			 if(subop>='a'&&subop<='z')
				 subop=subop-32;
			 switch(subop)
			 {
				 case 'R':stud_mod_roll();break;
				 case 'N':stud_mod_name();break;
				 case 'P':stud_mod_percent();break;
				 default:printf("invalid choice\n");
			 }
			 break;
		case 'V':stud_save();break;
		case 'E':printf("s/S:save and exit\ne/E:exit without saving\n");
			 scanf(" %c",&subop);
			 if(subop>='a' && subop <='z')
				 subop=subop-32;
			 switch(subop)
			 {
				 case 'S':stud_save();exit(0);
				 case 'E':exit(0);
				 default:printf("invalid choice\n");
			 }
			 break;
		case 'T':printf("r/R:sort with rollno\nn/N:sort with name\np/P:sort with percentage\n");
			 scanf(" %c",&subop);
			 if(subop>='a' && subop <='z')
				 subop=subop-32;
			 switch(subop)
			 {
				 case 'R':stud_sort_roll();break;
				 case 'N':stud_sort_name();break;
				 case 'P':stud_sort_percentage();break;
				 default:printf("invalid choice\n");
			 }
			 break;
		case 'L':delete_all();break;
		case 'R':reverse_list();break;
		default:printf("invalid\n");
	}
	}

}
