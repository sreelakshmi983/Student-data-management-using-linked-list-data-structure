a.out:main.o stud_add.o stu_delete.o stu_display.o stu_mod.o stud_save.o stud_sort.o delete_all.o reverse_list.o
	cc main.o stud_add.o stu_delete.o stu_display.o stu_mod.o stud_save.o stud_sort.o delete_all.o reverse_list.o -o a.out
main.o:main.c
	cc -c main.c
stud_add.o:stud_add.c
	cc -c stud_add.c
stu_delete.o:stu_delete.c
	cc -c stu_delete.c
stu_display.o:stu_display.c
	cc -c stu_display.c
stu_mod.o:stu_mod.c
	cc -c stu_mod.c
stud_save.o:stud_save.c
	cc -c stud_save.c
stud_sort.o:stud_sort.c
	cc -c stud_sort.c
delete_all.o:delete_all.c
	cc -c delete_all.c
reverse_list.o:reverse_list.c
	cc -c reverse_list.c
clear:
	@echo "cleaning up"
	@rm -vr *.o
