echo path to the file of the day
read pathname
if [ -d "$pathname" ]
then
	echo ok for the path\n
else
	echo couldn\'t find directory\n
fi

echo what day are we correcting ?
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
	cp $daynb/ex02/main.c /$pathname/ex02/main.c
	cp $daynb/ex03/main.c $pathname/ex03/main.c
	cp $daynb/ex04/main.c $pathname/ex04/main.c
	cp $daynb/ex05/main.c $pathname/ex05/main.c
	cp $daynb/ex06/main.c $pathname/ex06/main.c
	cp $daynb/ex07/main.c $pathname/ex07/main.c
	cp $daynb/ex08/main.c $pathname/ex08/main.c
	cp $daynb/ex09/main.c $pathname/ex09/main.c

elif [ "$daynb" = "j05" ]
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
	cp $daynb/ex10/main.c $pathname/ex10/main.c
	cp $daynb/ex11/main.c $pathname/ex11/main.c
	cp $daynb/ex12/main.c $pathname/ex12/main.c
	cp $daynb/ex13/main.c $pathname/ex13/main.c
	cp $daynb/ex14/main.c $pathname/ex14/main.c
	cp $daynb/ex15/main.c $pathname/ex15/main.c
	cp $daynb/ex16/main.c $pathname/ex16/main.c
	cp $daynb/ex17/main.c $pathname/ex17/main.c
	cp $daynb/ex18/main.c $pathname/ex18/main.c
	cp $daynb/ex19/main.c $pathname/ex19/main.c
	cp $daynb/ex20/main.c $pathname/ex20/main.c
	cp $daynb/ex21/main.c $pathname/ex21/main.c
fi
