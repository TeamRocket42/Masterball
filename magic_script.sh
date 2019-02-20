echo ————————————————
echo This file moves main.c files of selected day \in the functions folders.
echo ————————————————
echo path to the file of the day \| Type only the name and press Enter
echo ————————————————
read pathname
if [ -d "$pathname" ]
then
	echo ok for the path
else
	echo couldn\'t find directory
fi

echo ————————————————
echo what day are we correcting ? \| j00\, j\.\.\, j13
echo ————————————————

read daynb

if [ "$daynb" = "j03" ]
then
	cp $daynb/ex00/main.c $pathname/ex00/main.c
	cp $daynb/ex01/main.c $pathname/ex01/main.c
	cp $daynb/ex02/main.c $pathname/ex02/main.c
	cp $daynb/ex03/main.c $pathname/ex03/main.c
	cp $daynb/ex04/main.c $pathname/ex04/main.c
	cp $daynb/ex05/main.c $pathname/ex05/main.c
	cp $daynb/ex06/main.c $pathname/ex06/main.c
	cp $daynb/ex07/main.c $pathname/ex07/main.c
	cp $daynb/ex08/main.c $pathname/ex08/main.c
	cp $daynb/ex09/main.c $pathname/ex09/main.c

elif [ "$daynb" = "j04" ]
then
	cp $daynb/ex00/main.c $pathname/ex00/main.c
	cp $daynb/ex01/main.c $pathname/ex01/main.c
	cp $daynb/ex02/main.c $pathname/ex02/main.c
	cp $daynb/ex03/main.c $pathname/ex03/main.c
	cp $daynb/ex04/main.c $pathname/ex04/main.c
	cp $daynb/ex05/main.c $pathname/ex05/main.c
	cp $daynb/ex06/main.c $pathname/ex06/main.c
	cp $daynb/ex07/main.c $pathname/ex07/main.c
	cp $daynb/ex08/main.c $pathname/ex08/main.c
	cp $daynb/ex09/main.c $pathname/ex09/main.c

elif [ "$daynb" = "j05" ]
then
	cp $daynb/main00.c $pathname/ex00/main.c
	cp $daynb/main01.c $pathname/ex01/main.c
	cp $daynb/main02.c $pathname/ex02/main.c
	cp $daynb/main03.c $pathname/ex03/main.c
	cp $daynb/main04.c $pathname/ex04/main.c
	cp $daynb/main05.c $pathname/ex05/main.c
	cp $daynb/main06.c $pathname/ex06/main.c
	cp $daynb/main07.c $pathname/ex07/main.c
	cp $daynb/main08.c $pathname/ex08/main.c
	cp $daynb/main09.c $pathname/ex09/main.c
	cp $daynb/main10.c $pathname/ex10/main.c
	cp $daynb/main11.c $pathname/ex11/main.c
	cp $daynb/main12.c $pathname/ex12/main.c
	cp $daynb/main13.c $pathname/ex13/main.c
	cp $daynb/main14.c $pathname/ex14/main.c
	cp $daynb/main15.c $pathname/ex15/main.c
	cp $daynb/main16.c $pathname/ex16/main.c
	cp $daynb/main17.c $pathname/ex17/main.c
	cp $daynb/main18.c $pathname/ex18/main.c
	cp $daynb/main19.c $pathname/ex19/main.c
	cp $daynb/main20.c $pathname/ex20/main.c
	cp $daynb/main21.c $pathname/ex21/main.c
elif [ "$daynb" = "j07" ]
then
	cp $daynb/ex00/main.c $pathname/ex00/main.c
	cp $daynb/ex01/main.c $pathname/ex01/main.c
	cp $daynb/ex02/main.c $pathname/ex02/main.c
	cp $daynb/ex03/main.c $pathname/ex03/main.c
	cp $daynb/ex04/main.c $pathname/ex04/main.c
	cp $daynb/ex05/main.c $pathname/ex05/main.c
	cp $pathname/ex04/ft_split_whitespaces.c $pathname/ex05
	cp $daynb/ex06/main.c $pathname/ex06/main.c
	cp $daynb/ex07/main.c $pathname/ex07/main.c
fi
