#include <unistd.h>
#include <stdlib.h>
int	main()
{
	sleep(120);
 system("zenity --question --text=\"Se te asigno un tig, para saber el por que pregunta al staff mañana por la mañana\"");
	sleep(5);
 system("zenity --warning --title=\"TIG\" --text=\"TIG asignado , no podras hablar con nadie en la proxima hora\"");
	while (1)
	{
		system("zenity --warning --title=\"TIG\" --text=\"TIG asignado , no podras hablar con nadie en la proxima hora\"");
		sleep(5);
	}
	
}
